/**
    Licensed to the Apache Software Foundation (ASF) under one or more
    contributor license agreements.  See the NOTICE file distributed with
    this work for additional information regarding copyright ownership.
    The ASF licenses this file to You under the Apache License, Version 2.0
    (the "License"); you may not use this file except in compliance with
    the License.  You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

lexer grammar TplSqlLexer;

options
{
    caseInsensitive = true;
}

import HiveLexer;

KW_TOP                  : 'TOP';
KW_NATURAL              : 'NATURAL';
KW_DLL                  : 'DLL';

KW_TINYINT              : 'TINYINT' | 'INT8';
KW_SMALLINT             : 'SMALLINT' | 'INT16';
KW_INT                  : 'INT' 'EGER'? | 'INT32';
KW_BIGINT               : 'BIGINT' | 'INT64';
KW_INFTYINT             : 'INFTYINT';

KW_FP4                  : 'FP4';
KW_FP6E2M3              : 'FP6E2M3';
KW_FP6E3M2              : 'FP6E3M2';
KW_FP8E4M3              : 'FP8E4M3';
KW_FP8E5M2              : 'FP8E5M2';
KW_FP16                 : 'HALF' | 'FP16';
KW_BFP16                : 'BFLOAT16';
KW_TF19                 : 'TENSORFLOAT19' | 'TF19';
KW_FLOAT                : 'FLOAT' | 'FP32';
// KW_DOUBLE               : 'DOUBLE'; // 这个在语法中实现
KW_FP64                 : 'FP64';
KW_FP80                 : 'FP80';
KW_FP128                : 'QUADRUPLE' | 'FP128';
KW_INFTYFLOAT           : 'INFTYFLOAT';

KW_DECIMAL32            : 'DECIMAL32';
KW_DECIMAL64            : 'DECIMAL64';
KW_DECIMAL              : 'DEC' 'IMAL'? | 'NUMERIC' | 'DECIMAL128';
KW_INFTYDECIMAL         : 'INFTYDECIMAL';

KW_SEXAGESIMAL          : 'SEXAGESIMAL';


StringLiteral: ( '\'' ( ~('\'' | '\\') | ('\\' .))* '\'')+;
fragment QuotedIdentifier: '"' ( ~('"' | '\\') | ('\\' .))* '"';