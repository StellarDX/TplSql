# 此脚本由Mimo-2.6-Pro生成

param(
    [Alias('e')]
    [string]$Jar = '',

    [Alias('l')]
    [string]$Language = 'Cpp,Java,Python3',

    [Alias('h')]
    [switch]$Help
)

$ErrorActionPreference = 'Stop'

function Usage {
    $name = Split-Path -Leaf $MyInvocation.PSCommandPath
    Write-Host "用法: $name -e|--jar <antlr-jar-path> [-l|--language <language>]"
    Write-Host "  -e, --jar       ANTLR生成器jar路径（必填）"
    Write-Host "  -l, --language  目标语言，多个用','分隔(默认: Cpp,Java,Python3)"
    exit 1
}

if ($Help) {
    Usage
}

if ([string]::IsNullOrEmpty($Jar)) {
    [Console]::Error.WriteLine("缺少ANTLR生成器路径")
    Usage
}

$Languages = [System.Collections.Generic.List[string]]::new()
foreach ($lang in ($Language -split ',')) {
    if (-not [string]::IsNullOrEmpty($lang)) {
        $Languages.Add($lang)
    }
}

if ($Languages.Count -eq 0) {
    [Console]::Error.WriteLine("缺少目标语言")
    Usage
}

Set-Location ./Sources

foreach ($i in $Languages) {
    Write-Host "生成 $i 代码..."
    & java -jar $Jar -listener -visitor "-Dlanguage=$i" ./ADQLLexer.g4 ./ADQLParser.g4 -o "../Build/$i"
    if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
    & java -jar $Jar -listener -visitor "-Dlanguage=$i" ./TplSqlLexer.g4 ./TplSqlParser.g4 -o "../Build/$i"
    if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
}
