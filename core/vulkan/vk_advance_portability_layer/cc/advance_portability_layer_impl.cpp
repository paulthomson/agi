/*
 * Copyright (C) 2020 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include "core/vulkan/vk_advance_portability_layer/cc/layer.h"


namespace advance_portability {

    VkPhysicalDeviceFeatures features = {
            // robustBufferAccess
            VK_FALSE,
            // fullDrawIndexUint32
            VK_FALSE,
            // imageCubeArray
            VK_FALSE,
            // independentBlend
            VK_FALSE,
            // geometryShader
            VK_FALSE,
            // tessellationShader
            VK_FALSE,
            // sampleRateShading
            VK_FALSE,
            // dualSrcBlend
            VK_FALSE,
            // logicOp
            VK_FALSE,
            // multiDrawIndirect
            VK_FALSE,
            // drawIndirectFirstInstance
            VK_FALSE,
            // depthClamp
            VK_FALSE,
            // depthBiasClamp
            VK_FALSE,
            // fillModeNonSolid
            VK_FALSE,
            // depthBounds
            VK_FALSE,
            // wideLines
            VK_FALSE,
            // largePoints
            VK_FALSE,
            // alphaToOne
            VK_FALSE,
            // multiViewport
            VK_FALSE,
            // samplerAnisotropy
            VK_FALSE,
            // textureCompressionETC2
            VK_TRUE,
            // textureCompressionASTC_LDR
            VK_TRUE,
            // textureCompressionBC
            VK_FALSE,
            // occlusionQueryPrecise
            VK_FALSE,
            // pipelineStatisticsQuery
            VK_FALSE,
            // vertexPipelineStoresAndAtomics
            VK_FALSE,
            // fragmentStoresAndAtomics
            VK_FALSE,
            // shaderTessellationAndGeometryPointSize
            VK_FALSE,
            // shaderImageGatherExtended
            VK_FALSE,
            // shaderStorageImageExtendedFormats
            VK_FALSE,
            // shaderStorageImageMultisample
            VK_FALSE,
            // shaderStorageImageReadWithoutFormat
            VK_FALSE,
            // shaderStorageImageWriteWithoutFormat
            VK_FALSE,
            // shaderUniformBufferArrayDynamicIndexing
            VK_FALSE,
            // shaderSampledImageArrayDynamicIndexing
            VK_FALSE,
            // shaderStorageBufferArrayDynamicIndexing
            VK_FALSE,
            // shaderStorageImageArrayDynamicIndexing
            VK_FALSE,
            // shaderClipDistance
            VK_FALSE,
            // shaderCullDistance
            VK_FALSE,
            // shaderFloat64
            VK_FALSE,
            // shaderInt64
            VK_FALSE,
            // shaderInt16
            VK_FALSE,
            // shaderResourceResidency
            VK_FALSE,
            // shaderResourceMinLod
            VK_FALSE,
            // sparseBinding
            VK_FALSE,
            // sparseResidencyBuffer
            VK_FALSE,
            // sparseResidencyImage2D
            VK_FALSE,
            // sparseResidencyImage3D
            VK_FALSE,
            // sparseResidency2Samples
            VK_FALSE,
            // sparseResidency4Samples
            VK_FALSE,
            // sparseResidency8Samples
            VK_FALSE,
            // sparseResidency16Samples
            VK_FALSE,
            // sparseResidencyAliased
            VK_FALSE,
            // variableMultisampleRate
            VK_FALSE,
            // inheritedQueries
            VK_FALSE,
    };

    void vkGetPhysicalDeviceFeatures(PFN_vkGetPhysicalDeviceFeatures next, VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures) {
        *pFeatures = features;
    }
} // namespace advance_portability
