// @@@LICENSE
//
//      Copyright (c) 2017 LG Electronics, Inc.
//
// Confidential computer software. Valid license from LG required for
// possession, use or copying. Consistent with FAR 12.211 and 12.212,
// Commercial Computer Software, Computer Software Documentation, and
// Technical Data for Commercial Items are licensed to the U.S. Government
// under vendor's standard commercial license.
//
// LICENSE@@@

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
