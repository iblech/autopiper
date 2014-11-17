/*
 * Copyright 2014 Google Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _AUTOPIPER_COMPILER_H_
#define _AUTOPIPER_COMPILER_H_

#include "backend/ir.h"
#include "common/parser-utils.h"

#include <boost/noncopyable.hpp>
#include <string>

namespace autopiper {

class Compiler : public boost::noncopyable {
    public:
        Compiler();
        ~Compiler();

        bool CompileFile(const std::string& filename,
                         const std::string& output,
                         const CompilerOptions& options,
                         ErrorCollector* collector);
};

}  // namespace autopiper

#endif
