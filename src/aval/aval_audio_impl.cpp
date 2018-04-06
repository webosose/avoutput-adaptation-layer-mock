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
