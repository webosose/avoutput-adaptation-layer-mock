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

#include "aval_audio_impl.h"

bool aval_audio_impl::initSpeaker()
{
	return true;
}

bool aval_audio_impl::connectInput(AVAL_AUDIO_RESOURCE_T audioResourceId, int16_t *port)
{
	return true;
}

bool aval_audio_impl::disconnectInput(AVAL_AUDIO_RESOURCE_T audioResourceId)
{
	return true;
}

bool aval_audio_impl::connectOutput(AVAL_AUDIO_SNDOUT_T outputType, AVAL_AUDIO_RESOURCE_T outputConnect, AVAL_AUDIO_RESOURCE_T currentConnect)
{
	return true;
}

bool aval_audio_impl::disconnectOutput(AVAL_AUDIO_SNDOUT_T outputType, AVAL_AUDIO_RESOURCE_T outputConnect, AVAL_AUDIO_RESOURCE_T currentConnect)
{
	return true;
}

bool aval_audio_impl::setMute(AVAL_AUDIO_RESOURCE_T audioResourceId, bool mute)
{
	return true;
}

AVAL_ERROR aval_audio_impl::setOutputMode(AVAL_AUDIO_SNDOUT_T outputType, AVAL_AUDIO_SPDIF_MODE_T spdifMode)
{
	return AVAL_ERROR_NONE;
}

AVAL_ERROR aval_audio_impl::setOutputMute(AVAL_AUDIO_SNDOUT_T outputType, bool mute)
{
	return AVAL_ERROR_NONE;
}

AVAL_ERROR aval_audio_impl::setOutputVolume(AVAL_AUDIO_SNDOUT_T outputType, AVAL_AUDIO_VOLUME_T volume)
{
	return AVAL_ERROR_NONE;
}
