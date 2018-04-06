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

#pragma once
#include <aval_api.h>

class aval_video_impl : public AVAL_Video
{
public:

	aval_video_impl();
	~aval_video_impl() { }

	bool connect(AVAL_VIDEO_WID_T wId, AVAL_VSC_INPUT_SRC_INFO_T vscInput, AVAL_VSC_OUTPUT_MODE_T outputmode, unsigned int *planeId);
	bool disconnect(AVAL_VIDEO_WID_T wId, AVAL_VSC_INPUT_SRC_INFO_T vscInput, AVAL_VSC_OUTPUT_MODE_T outputmode);
	bool applyScaling(AVAL_VIDEO_WID_T wId, AVAL_VIDEO_RECT_T srcInfo, bool adaptive, AVAL_VIDEO_RECT_T inputRegion, AVAL_VIDEO_RECT_T outputRegion);
	bool setDualVideo(bool enable);
	bool setCompositionParams(std::vector<AVAL_WINDOW_INFO_T> zOrder);
	bool setWindowBlanking(AVAL_VIDEO_WID_T wId, bool blank, AVAL_VIDEO_RECT_T inputRegion, AVAL_VIDEO_RECT_T outputRegion);

	bool setDisplayResolution(AVAL_VIDEO_SIZE_T);
	std::vector<AVAL_VIDEO_SIZE_T> getSupportedResolutions();
	AVAL_VIDEO_RECT_T getDisplayResolution();
	bool getVideoCapabilities( AVAL_VIDEO_SIZE_T& minDownscaleSize, AVAL_VIDEO_SIZE_T& maxUpscaleSize);
	std::vector<AVAL_PLANE_T> getVideoPlanes();
};
