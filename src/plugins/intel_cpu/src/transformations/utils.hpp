// Copyright (C) 2018-2023 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include "openvino/core/model.hpp"

namespace ov {
namespace intel_cpu {

bool has_matmul_with_compressed_weights(const std::shared_ptr<const ov::Model>& model);

bool is_gather_with_compressed_weights(const std::shared_ptr<const ov::Node>& node);

}   // namespace intel_cpu
}   // namespace ov
