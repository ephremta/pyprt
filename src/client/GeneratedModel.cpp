/**
 * PyPRT - Python Bindings for the Procedural Runtime (PRT) of CityEngine
 *
 * Copyright (c) 2012-2020 Esri R&D Center Zurich
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * A copy of the license is available in the repository's LICENSE file.
 */

#include "GeneratedModel.h"

GeneratedModel::GeneratedModel(const size_t& initShapeIdx, const std::vector<double>& vert,
                               const std::vector<uint32_t>& indices, const std::vector<uint32_t>& face,
                               const pybind11::dict& rep)
    : mInitialShapeIndex(initShapeIdx), mVertices(vert), mIndices(indices), mFaces(face), mReport(rep) {}