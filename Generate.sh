#!/bin/bash

ANTLRExec=""
Languages=("Cpp" "Java" "Python3")

Usage() {
    echo "用法: $(basename "$0") -e|--jar <antlr-jar-path> [-l|--language <language>]"
    echo "  -e, --jar       ANTLR生成器jar路径（必填）"
    echo "  -l, --language  目标语言，多个用','分隔(默认: Cpp,Java,Python3)"
    exit 1
}

OPTS=$(getopt -o e:l:h -l jar:,language:,help -n "$(basename "$0")" -- "$@")
if [ $? -ne 0 ]; then
    Usage
fi
eval set -- "$OPTS"

while true;
do
    case "$1" in
        -e|--jar)
            ANTLRExec="$2"
            shift 2
            ;;
        -l|--language)
            IFS=',' read -r -a _Langs <<< "$2"
            Languages=()
            for _lang in "${_Langs[@]}";
            do
                [ -n "$_lang" ] && Languages+=("$_lang")
            done
            shift 2
            ;;
        -h|--help)
            Usage
            ;;
        --)
            shift
            break
            ;;
        *)
            Usage
            ;;
    esac
done

if [ -z "$ANTLRExec" ]; then
    echo "缺少ANTLR生成器路径" >&2
    Usage
fi

if [ ${#Languages[@]} -eq 0 ]; then
    echo "缺少目标语言" >&2
    Usage
fi

cd ./Sources

for i in "${Languages[@]}";
do
    echo "生成 $i 代码..."
    java -jar "$ANTLRExec" -listener -visitor -Dlanguage=$i ./ADQLLexer.g4 ./ADQLParser.g4 -o ../Build/$i
    java -jar "$ANTLRExec" -listener -visitor -Dlanguage=$i ./TplSqlLexer.g4 ./TplSqlParser.g4 -o ../Build/$i
done
