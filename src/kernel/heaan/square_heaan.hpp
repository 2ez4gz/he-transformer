/*******************************************************************************
* Copyright 2017-2018 Intel Corporation
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
*******************************************************************************/

#pragma once

#include <memory>

namespace ngraph
{
    namespace element
    {
        class Type;
    }

    namespace runtime
    {
        namespace he
        {
            class HeaanCiphertextWrapper;

            namespace he_heaan
            {
                class HEHeaanBackend;
            }

            namespace kernel
            {
                namespace heaan
                {
                    void scalar_square(
                        const std::shared_ptr<runtime::he::HeaanCiphertextWrapper>& arg,
                        std::shared_ptr<runtime::he::HeaanCiphertextWrapper>& out,
                        const element::Type& type,
                        const std::shared_ptr<runtime::he::he_heaan::HEHeaanBackend>
                            he_heaan_backend);
                }
            }
        }
    }
}