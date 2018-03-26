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
#include "aval_settings_impl.h"

using namespace std::placeholders;

AVAL_ControlSettings_Impl::AVAL_ControlSettings_Impl()

{

}


bool AVAL_ControlSettings_Impl::configureSoundSettings(const std::string control, const std::string controlVal)
{
	return true;
}
bool AVAL_ControlSettings_Impl::configureSoundSettings(const std::string control, const int32_t controlVal[])
{
	return true;
}

bool AVAL_ControlSettings_Impl::configureVideoSettings(const std::string control, const AVAL_VIDEO_WID_T winID, const int32_t controlVal[])
{
	return true;
}
