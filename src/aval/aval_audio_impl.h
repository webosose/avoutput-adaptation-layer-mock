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

class aval_audio_impl : public AVAL_Audio
{
private:
	bool initSpeaker();

public:

	aval_audio_impl()
	{
		initSpeaker();
	}

	~aval_audio_impl() { }

	bool connectInput(AVAL_AUDIO_RESOURCE_T audioResourceId, int16_t *port);
	bool disconnectInput(AVAL_AUDIO_RESOURCE_T audioResourceId);
	bool connectOutput(AVAL_AUDIO_SNDOUT_T outputType, AVAL_AUDIO_RESOURCE_T outputConnect, AVAL_AUDIO_RESOURCE_T currentConnect);
	bool disconnectOutput(AVAL_AUDIO_SNDOUT_T outputType, AVAL_AUDIO_RESOURCE_T outputConnect, AVAL_AUDIO_RESOURCE_T currentConnect);
	bool setMute(AVAL_AUDIO_RESOURCE_T audioResourceId, bool mute);
	AVAL_ERROR setOutputMode(AVAL_AUDIO_SNDOUT_T outputType, AVAL_AUDIO_SPDIF_MODE_T spdifMode);
	AVAL_ERROR setOutputMute(AVAL_AUDIO_SNDOUT_T outputType, bool mute);
	AVAL_ERROR setOutputVolume(AVAL_AUDIO_SNDOUT_T outputType, AVAL_AUDIO_VOLUME_T volume);
};
