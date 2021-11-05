#ifndef _VKSCACHEBUILDER_HPP
#define _VKSCACHEBUILDER_HPP

/*-------------------------------------------------------------------------
 * Vulkan CTS Framework
 * --------------------
 *
 * Copyright (c) 2021 The Khronos Group Inc.
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
 *-------------------------------------------------------------------------*/

#include "vksCommon.hpp"
#include "vksStructsVKSC.hpp"

#include "vkPrograms.hpp"

namespace vksc_server
{

void exportFilesForExternalCompiler (const VulkanPipelineCacheInput&		input,
									 const std::string&						path);

vector<u8>	CreatePipelineCache (const VulkanPipelineCacheInput&			input,
								 std::vector<VulkanPipelineSize>&			pipelineSizes,
								 const CmdLineParams&						cmdLineParams,
								 const vk::PlatformInterface&				vkp,
								 vk::VkInstance								instance,
								 const vk::InstanceInterface&				vki,
								 vk::VkPhysicalDevice						physicalDevice,
								 deUint32									queueIndex);

}

#endif // _VKSCACHEBUILDER_HPP