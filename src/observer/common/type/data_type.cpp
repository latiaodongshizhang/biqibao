/* Copyright (c) 2021 OceanBase and/or its affiliates. All rights reserved.
miniob is licensed under Mulan PSL v2.
You can use this software according to the terms and conditions of the Mulan PSL v2.
You may obtain a copy of Mulan PSL v2 at:
         http://license.coscl.org.cn/MulanPSL2
THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
See the Mulan PSL v2 for more details. */

#include "common/type/char_type.h"
#include "common/type/float_type.h"
#include "common/type/integer_type.h"
<<<<<<< HEAD
#include "common/type/date_type.h"
#include "common/type/data_type.h"
#include "common/type/vector_type.h"
 
=======
#include "common/type/data_type.h"
#include "common/type/vector_type.h"
>>>>>>> 9172074180a6beef223828077dd35ad072f73a10

array<unique_ptr<DataType>, static_cast<int>(AttrType::MAXTYPE)> DataType::type_instances_ = {
    make_unique<DataType>(AttrType::UNDEFINED),
    make_unique<CharType>(),
    make_unique<IntegerType>(),
    make_unique<FloatType>(),
<<<<<<< HEAD
    make_unique<DateType>(),
=======
>>>>>>> 9172074180a6beef223828077dd35ad072f73a10
    make_unique<VectorType>(),
    make_unique<DataType>(AttrType::BOOLEANS),
};