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

parser grammar TplSqlParser;

options
{
    tokenVocab = TplSqlLexer;
}

// TplSql继承ADQL的大部分特性，并在此基础上引入Hive语法的特性补全Create，Insert和Delete等语句
// 其定位是一个较为完整的可读写查询体系，未来还会引入类似MySQL的过程化特性
import TplSqlNonRsvdKwds, ADQLParser;