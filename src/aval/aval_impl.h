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
class aval_impl : public AVAL
{
public:

	aval_impl() {}
	~aval_impl() { }

	bool initialize();
	bool deinitialize();
};
