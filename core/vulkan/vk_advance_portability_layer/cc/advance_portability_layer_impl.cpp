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

#include <cassert>

#include "core/vulkan/vk_advance_portability_layer/cc/advance_portability_layer_structs.h"
#include "core/vulkan/vk_advance_portability_layer/cc/layer.h"

namespace advance_portability {


void vkGetPhysicalDeviceFeatures(PFN_vkGetPhysicalDeviceFeatures next,
                                 VkPhysicalDevice physicalDevice,
                                 VkPhysicalDeviceFeatures* pFeatures) {
  assert(pFeatures != nullptr &&
         "vkGetPhysicalDeviceFeatures: pFeatures is nullptr");
  *pFeatures = features;
}

VkResult vkEnumeratePhysicalDevices(PFN_vkEnumeratePhysicalDevices next,
                                    VkInstance instance,
                                    uint32_t* pPhysicalDeviceCount,
                                    VkPhysicalDevice* pPhysicalDevices) {
  // Check that the actual device count is > 0.
  {
    uint32_t deviceCount = 0;
    // Get the count of physical devices.
    VkResult result = next(instance, &deviceCount, nullptr);
    if (result != VK_SUCCESS) {
      return result;
    }
    if (deviceCount == 0) {
      assert(false && "vkEnumeratePhysicalDevices: 0 devices.");
      return VK_ERROR_UNKNOWN;
    }
  }

  // If pPhysicalDevices is NULL, then the number of physical devices available
  // is returned in pPhysicalDeviceCount.
  if (pPhysicalDevices == nullptr) {
    *pPhysicalDeviceCount = 1;
    return VK_SUCCESS;
  }


  if (*pPhysicalDeviceCount == 0) {
    return VK_INCOMPLETE;
  }

  uint32_t simulated_num_physical_devices = 1;
  VkResult result =
      next(instance, &simulated_num_physical_devices, pPhysicalDevices);

  switch (result) {
    case VK_SUCCESS:
    case VK_INCOMPLETE:
      break;
    default:
      return result;
  }

  *pPhysicalDeviceCount = 1;
  return VK_SUCCESS;
}

void vkGetPhysicalDeviceFormatProperties(
    PFN_vkGetPhysicalDeviceFormatProperties next,
    VkPhysicalDevice physicalDevice, VkFormat format,
    VkFormatProperties* pFormatProperties) {
  for (const auto& format_property : format_properties) {
    if (format_property.format == format) {
      *pFormatProperties = format_property.properties;
      return;
    }
  }
  *pFormatProperties = VkFormatProperties{};
}

void vkGetPhysicalDeviceMemoryProperties(
    PFN_vkGetPhysicalDeviceMemoryProperties next,
    VkPhysicalDevice physicalDevice,
    VkPhysicalDeviceMemoryProperties* pMemoryProperties) {

  *pMemoryProperties = physical_device_memory_properties;
}

}  // namespace advance_portability
