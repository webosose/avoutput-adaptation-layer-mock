// Copyright (c) 2017-2018 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0

#include <string>

#include "aval_video_impl.h"

AVAL_VIDEO_RECT_T aval_video_impl::getDisplayResolution()
{
	return AVAL_VIDEO_RECT_T{0,0,0,0};
}

aval_video_impl::aval_video_impl()
{

}

bool aval_video_impl::getVideoCapabilities( AVAL_VIDEO_SIZE_T& minDownscaleSize, AVAL_VIDEO_SIZE_T& maxUpscaleSize)
{
	return true;
}


bool aval_video_impl::connect(AVAL_VIDEO_WID_T wId, AVAL_VSC_INPUT_SRC_INFO_T vscInput, AVAL_VSC_OUTPUT_MODE_T outputmode, unsigned int *planeId)
{
	return true;
}

bool aval_video_impl::disconnect(AVAL_VIDEO_WID_T wId, AVAL_VSC_INPUT_SRC_INFO_T vscInput, AVAL_VSC_OUTPUT_MODE_T outputmode)
{
	return true;
}

bool aval_video_impl::applyScaling(AVAL_VIDEO_WID_T wId, AVAL_VIDEO_RECT_T srcInfo, bool adaptive, AVAL_VIDEO_RECT_T inputRegion, AVAL_VIDEO_RECT_T outputRegion)
{
	return true;
}

bool aval_video_impl::setDualVideo(bool enable)
{
	return true;
}

bool aval_video_impl::setCompositionParams(std::vector<AVAL_WINDOW_INFO_T> zOrder)
{
	return true;
}

bool aval_video_impl::setWindowBlanking(AVAL_VIDEO_WID_T wId, bool blank, AVAL_VIDEO_RECT_T inputRegion, AVAL_VIDEO_RECT_T outputRegion)
{
	return true;
}

bool aval_video_impl::setDisplayResolution(AVAL_VIDEO_SIZE_T win)
{
	return true;
}
std::vector<AVAL_PLANE_T> aval_video_impl::getVideoPlanes()
{
	return std::vector<AVAL_PLANE_T>();
}
std::vector<AVAL_VIDEO_SIZE_T> aval_video_impl::getSupportedResolutions()
{
	return std::vector<AVAL_VIDEO_SIZE_T> ();
}
