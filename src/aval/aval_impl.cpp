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

#include <iostream>
#include <fstream>
#include <sstream>



#include "aval_impl.h"
#include "aval_audio_impl.h"
#include "aval_video_impl.h"
#include "aval_settings_impl.h"

#include "logging.h"

static const char* const logContextName = "aval-mock";
static const char* const logPrefix = "[aval-mock]";
PmLogContext avalLogContext;

AVAL* AVAL::_instance = nullptr;

AVAL* AVAL::getInstance()
{
	if(!_instance)
		_instance = new aval_impl();

	return _instance;
}


bool aval_impl::initialize()
{
	

	//Setup logging context
	PmLogErr error = PmLogGetContext(logContextName, &avalLogContext);
	if (error != kPmLogErr_None)
	{
		std::cerr << logPrefix << "Failed to setup up log context " << logContextName << std::endl;
	}

	audio = new aval_audio_impl();
	video = new aval_video_impl();
	controls = new AVAL_ControlSettings_Impl();

	return true;
}

bool aval_impl::deinitialize()
{
	delete audio;
	delete video;
	delete controls;
	return true;
}

