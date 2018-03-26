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

#include <cstdint>
#include <string>
#include <functional>
#include <aval_api.h>

class AVAL_ControlSettings_Impl:public AVAL_ControlSettings
{

public:
	AVAL_ControlSettings_Impl();
	bool configureVideoSettings(const std::string ctrl, AVAL_VIDEO_WID_T winID, const int32_t[]);
	bool configureSoundSettings(const std::string ctrl, const std::string );
	bool configureSoundSettings(const std::string control, const int32_t controlVal[]);
};