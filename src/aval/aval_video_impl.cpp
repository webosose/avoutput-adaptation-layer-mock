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
