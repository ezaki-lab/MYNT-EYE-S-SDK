// Copyright 2018 Slightech Co., Ltd. All rights reserved.
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
#ifndef MYNTEYE_DISPARITY_NORMALIZED_PROCESSOR_H_  // NOLINT
#define MYNTEYE_DISPARITY_NORMALIZED_PROCESSOR_H_
#pragma once

#include <string>

#include "api/processor/processor.h"

MYNTEYE_BEGIN_NAMESPACE

class DisparityNormalizedProcessor : public Processor {
 public:
  static constexpr auto &&NAME = "DisparityNormalizedProcessor";

  DisparityNormalizedProcessor();
  virtual ~DisparityNormalizedProcessor();

  std::string Name() override;

 protected:
  Object *OnCreateOutput() override;
  bool OnProcess(
      Object *const in, Object *const out, Processor *const parent) override;
};

MYNTEYE_END_NAMESPACE

#endif  // MYNTEYE_DISPARITY_NORMALIZED_PROCESSOR_H_  NOLINT