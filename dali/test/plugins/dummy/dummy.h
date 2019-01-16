// Copyright (c) 2017-2018, NVIDIA CORPORATION. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef DALI_TEST_PLUGINS_DUMMY_DUMMY_H_
#define DALI_TEST_PLUGINS_DUMMY_DUMMY_H_

#include <cstring>
#include "dali/pipeline/operators/operator.h"

namespace other_ns {

template <typename Backend>
class Dummy : public ::dali::Operator<Backend> {
 public:
  inline explicit Dummy(const ::dali::OpSpec &spec) :
    ::dali::Operator<Backend>(spec) {}

  virtual inline ~Dummy() = default;

  DISABLE_COPY_MOVE_ASSIGN(Dummy);

 protected:
  void RunImpl(::dali::Workspace<Backend> *ws, const int idx) override;
};

}  // namespace other_ns

#endif  // DALI_TEST_PLUGINS_DUMMY_DUMMY_H_