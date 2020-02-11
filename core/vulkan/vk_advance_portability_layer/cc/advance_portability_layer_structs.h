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

#include "vulkan/vulkan.h"

namespace advance_portability {

VkPhysicalDeviceFeatures features = {
  // robustBufferAccess
  VK_TRUE,
  // fullDrawIndexUint32
  VK_TRUE,
  // imageCubeArray
  VK_TRUE,
  // independentBlend
  VK_TRUE,
  // geometryShader
  VK_TRUE,
  // tessellationShader
  VK_TRUE,
  // sampleRateShading
  VK_TRUE,
  // dualSrcBlend
  VK_FALSE,
  // logicOp
  VK_FALSE,
  // multiDrawIndirect
  VK_FALSE,
  // drawIndirectFirstInstance
  VK_TRUE,
  // depthClamp
  VK_FALSE,
  // depthBiasClamp
  VK_TRUE,
  // fillModeNonSolid
  VK_FALSE,
  // depthBounds
  VK_FALSE,
  // wideLines
  VK_FALSE,
  // largePoints
  VK_TRUE,
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
  VK_TRUE,
  // pipelineStatisticsQuery
  VK_FALSE,
  // vertexPipelineStoresAndAtomics
  VK_FALSE,
  // fragmentStoresAndAtomics
  VK_TRUE,
  // shaderTessellationAndGeometryPointSize
  VK_FALSE,
  // shaderImageGatherExtended
  VK_TRUE,
  // shaderStorageImageExtendedFormats
  VK_TRUE,
  // shaderStorageImageMultisample
  VK_FALSE,
  // shaderStorageImageReadWithoutFormat
  VK_TRUE,
  // shaderStorageImageWriteWithoutFormat
  VK_TRUE,
  // shaderUniformBufferArrayDynamicIndexing
  VK_TRUE,
  // shaderSampledImageArrayDynamicIndexing
  VK_TRUE,
  // shaderStorageBufferArrayDynamicIndexing
  VK_TRUE,
  // shaderStorageImageArrayDynamicIndexing
  VK_TRUE,
  // shaderClipDistance
  VK_FALSE,
  // shaderCullDistance
  VK_FALSE,
  // shaderFloat64
  VK_FALSE,
  // shaderInt64
  VK_FALSE,
  // shaderInt16
  VK_TRUE,
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

struct VkFormatPropertiesWrapper {
  VkFormat format;
  VkFormatProperties properties;
};

VkFormatPropertiesWrapper format_properties[] = {
  {
    // format
    VkFormat(2),
    // properties
    {
      // linearTilingFeatures
      56449,
      // optimalTilingFeatures
      56449,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(3),
    // properties
    {
      // linearTilingFeatures
      56449,
      // optimalTilingFeatures
      56449,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(4),
    // properties
    {
      // linearTilingFeatures
      56705,
      // optimalTilingFeatures
      56705,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(5),
    // properties
    {
      // linearTilingFeatures
      2432,
      // optimalTilingFeatures
      2432,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(6),
    // properties
    {
      // linearTilingFeatures
      56449,
      // optimalTilingFeatures
      56449,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(7),
    // properties
    {
      // linearTilingFeatures
      56449,
      // optimalTilingFeatures
      56449,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(8),
    // properties
    {
      // linearTilingFeatures
      56705,
      // optimalTilingFeatures
      56705,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(9),
    // properties
    {
      // linearTilingFeatures
      56707,
      // optimalTilingFeatures
      56707,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(10),
    // properties
    {
      // linearTilingFeatures
      56707,
      // optimalTilingFeatures
      56707,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(13),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(14),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(15),
    // properties
    {
      // linearTilingFeatures
      50177,
      // optimalTilingFeatures
      50177,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(16),
    // properties
    {
      // linearTilingFeatures
      56707,
      // optimalTilingFeatures
      56707,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(17),
    // properties
    {
      // linearTilingFeatures
      56707,
      // optimalTilingFeatures
      56707,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(20),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(21),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(22),
    // properties
    {
      // linearTilingFeatures
      52225,
      // optimalTilingFeatures
      52225,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(23),
    // properties
    {
      // linearTilingFeatures
      56449,
      // optimalTilingFeatures
      0,
      // bufferFeatures
      64,
    },
  },
  {
    // format
    VkFormat(24),
    // properties
    {
      // linearTilingFeatures
      0,
      // optimalTilingFeatures
      0,
      // bufferFeatures
      64,
    },
  },
  {
    // format
    VkFormat(27),
    // properties
    {
      // linearTilingFeatures
      0,
      // optimalTilingFeatures
      0,
      // bufferFeatures
      64,
    },
  },
  {
    // format
    VkFormat(28),
    // properties
    {
      // linearTilingFeatures
      0,
      // optimalTilingFeatures
      0,
      // bufferFeatures
      64,
    },
  },
  {
    // format
    VkFormat(37),
    // properties
    {
      // linearTilingFeatures
      56707,
      // optimalTilingFeatures
      56707,
      // bufferFeatures
      88,
    },
  },
  {
    // format
    VkFormat(38),
    // properties
    {
      // linearTilingFeatures
      56707,
      // optimalTilingFeatures
      56707,
      // bufferFeatures
      88,
    },
  },
  {
    // format
    VkFormat(41),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      88,
    },
  },
  {
    // format
    VkFormat(42),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      88,
    },
  },
  {
    // format
    VkFormat(43),
    // properties
    {
      // linearTilingFeatures
      56705,
      // optimalTilingFeatures
      56705,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(44),
    // properties
    {
      // linearTilingFeatures
      56705,
      // optimalTilingFeatures
      56705,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(50),
    // properties
    {
      // linearTilingFeatures
      56705,
      // optimalTilingFeatures
      56705,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(51),
    // properties
    {
      // linearTilingFeatures
      56707,
      // optimalTilingFeatures
      56707,
      // bufferFeatures
      88,
    },
  },
  {
    // format
    VkFormat(52),
    // properties
    {
      // linearTilingFeatures
      56707,
      // optimalTilingFeatures
      56707,
      // bufferFeatures
      88,
    },
  },
  {
    // format
    VkFormat(55),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      88,
    },
  },
  {
    // format
    VkFormat(56),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      88,
    },
  },
  {
    // format
    VkFormat(57),
    // properties
    {
      // linearTilingFeatures
      56705,
      // optimalTilingFeatures
      56705,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(58),
    // properties
    {
      // linearTilingFeatures
      56705,
      // optimalTilingFeatures
      56705,
      // bufferFeatures
      64,
    },
  },
  {
    // format
    VkFormat(62),
    // properties
    {
      // linearTilingFeatures
      50177,
      // optimalTilingFeatures
      50177,
      // bufferFeatures
      64,
    },
  },
  {
    // format
    VkFormat(63),
    // properties
    {
      // linearTilingFeatures
      0,
      // optimalTilingFeatures
      0,
      // bufferFeatures
      64,
    },
  },
  {
    // format
    VkFormat(64),
    // properties
    {
      // linearTilingFeatures
      56707,
      // optimalTilingFeatures
      56707,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(65),
    // properties
    {
      // linearTilingFeatures
      0,
      // optimalTilingFeatures
      0,
      // bufferFeatures
      64,
    },
  },
  {
    // format
    VkFormat(68),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(69),
    // properties
    {
      // linearTilingFeatures
      0,
      // optimalTilingFeatures
      0,
      // bufferFeatures
      64,
    },
  },
  {
    // format
    VkFormat(70),
    // properties
    {
      // linearTilingFeatures
      52611,
      // optimalTilingFeatures
      52611,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(71),
    // properties
    {
      // linearTilingFeatures
      52611,
      // optimalTilingFeatures
      52611,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(74),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(75),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(76),
    // properties
    {
      // linearTilingFeatures
      56707,
      // optimalTilingFeatures
      56707,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(77),
    // properties
    {
      // linearTilingFeatures
      52611,
      // optimalTilingFeatures
      52611,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(78),
    // properties
    {
      // linearTilingFeatures
      52611,
      // optimalTilingFeatures
      52611,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(81),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(82),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(83),
    // properties
    {
      // linearTilingFeatures
      56707,
      // optimalTilingFeatures
      56707,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(84),
    // properties
    {
      // linearTilingFeatures
      0,
      // optimalTilingFeatures
      0,
      // bufferFeatures
      64,
    },
  },
  {
    // format
    VkFormat(85),
    // properties
    {
      // linearTilingFeatures
      0,
      // optimalTilingFeatures
      0,
      // bufferFeatures
      64,
    },
  },
  {
    // format
    VkFormat(88),
    // properties
    {
      // linearTilingFeatures
      0,
      // optimalTilingFeatures
      0,
      // bufferFeatures
      64,
    },
  },
  {
    // format
    VkFormat(89),
    // properties
    {
      // linearTilingFeatures
      0,
      // optimalTilingFeatures
      0,
      // bufferFeatures
      64,
    },
  },
  {
    // format
    VkFormat(90),
    // properties
    {
      // linearTilingFeatures
      0,
      // optimalTilingFeatures
      0,
      // bufferFeatures
      64,
    },
  },
  {
    // format
    VkFormat(91),
    // properties
    {
      // linearTilingFeatures
      52611,
      // optimalTilingFeatures
      52611,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(92),
    // properties
    {
      // linearTilingFeatures
      52611,
      // optimalTilingFeatures
      52611,
      // bufferFeatures
      72,
    },
  },
  {
    // format
    VkFormat(95),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      88,
    },
  },
  {
    // format
    VkFormat(96),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      88,
    },
  },
  {
    // format
    VkFormat(97),
    // properties
    {
      // linearTilingFeatures
      56707,
      // optimalTilingFeatures
      56707,
      // bufferFeatures
      88,
    },
  },
  {
    // format
    VkFormat(98),
    // properties
    {
      // linearTilingFeatures
      52359,
      // optimalTilingFeatures
      52359,
      // bufferFeatures
      120,
    },
  },
  {
    // format
    VkFormat(99),
    // properties
    {
      // linearTilingFeatures
      52359,
      // optimalTilingFeatures
      52359,
      // bufferFeatures
      120,
    },
  },
  {
    // format
    VkFormat(100),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      88,
    },
  },
  {
    // format
    VkFormat(101),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      88,
    },
  },
  {
    // format
    VkFormat(102),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      88,
    },
  },
  {
    // format
    VkFormat(103),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      88,
    },
  },
  {
    // format
    VkFormat(104),
    // properties
    {
      // linearTilingFeatures
      0,
      // optimalTilingFeatures
      0,
      // bufferFeatures
      64,
    },
  },
  {
    // format
    VkFormat(105),
    // properties
    {
      // linearTilingFeatures
      0,
      // optimalTilingFeatures
      0,
      // bufferFeatures
      64,
    },
  },
  {
    // format
    VkFormat(106),
    // properties
    {
      // linearTilingFeatures
      0,
      // optimalTilingFeatures
      0,
      // bufferFeatures
      64,
    },
  },
  {
    // format
    VkFormat(107),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      88,
    },
  },
  {
    // format
    VkFormat(108),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      88,
    },
  },
  {
    // format
    VkFormat(109),
    // properties
    {
      // linearTilingFeatures
      52355,
      // optimalTilingFeatures
      52355,
      // bufferFeatures
      88,
    },
  },
  {
    // format
    VkFormat(122),
    // properties
    {
      // linearTilingFeatures
      56707,
      // optimalTilingFeatures
      56707,
      // bufferFeatures
      8,
    },
  },
  {
    // format
    VkFormat(123),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(124),
    // properties
    {
      // linearTilingFeatures
      50177,
      // optimalTilingFeatures
      50689,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(125),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54785,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(126),
    // properties
    {
      // linearTilingFeatures
      50177,
      // optimalTilingFeatures
      50689,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(127),
    // properties
    {
      // linearTilingFeatures
      50177,
      // optimalTilingFeatures
      50689,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(129),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54785,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(147),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(148),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(149),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(150),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(151),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(152),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(153),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(154),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(155),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(156),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(157),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(158),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(159),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(160),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(161),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(162),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(163),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(164),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(165),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(166),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(167),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(168),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(169),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(170),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(171),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(172),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(173),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(174),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(175),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(176),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(177),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(178),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(179),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(180),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(181),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(182),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(183),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
  {
    // format
    VkFormat(184),
    // properties
    {
      // linearTilingFeatures
      54273,
      // optimalTilingFeatures
      54273,
      // bufferFeatures
      0,
    },
  },
};

}  // namespace advance_portability

