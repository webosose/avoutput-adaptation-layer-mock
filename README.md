avoutput-adaptation-layer-mock
=====================

Summary
-------
webOS avoutput adaptation layer that talks to HAL.

Description
-----------
Mock/Dummy implementation of APIs defined in avoutput-adaptation-layer-api
interface. This library will get built for reference platform or the emulator
builds.

How to Build on Linux
=====================

## Dependencies

Below are the tools and libraries (and their minimum versions) required to build
avoutput-adaptation-layer-mock:

* cmake (version required by openwebos/cmake-modules-webos)
* gcc 4.6.3
* make (any version)
* pmloglib
* webos-pro/avoutput-adaptation-layer-api


## Building

Once you have downloaded the source, enter the following to build it (after
changing into the directory under which it was downloaded):

    $ mkdir BUILD
    $ cd BUILD
    $ cmake ..
    $ make
    $ sudo make install

The directory under which the files are installed defaults to `/usr/local/webos`.
You can install them elsewhere by supplying a value for `WEBOS_INSTALL_ROOT`
when invoking `cmake`. For example:

    $ cmake -D WEBOS_INSTALL_ROOT:PATH=$HOME/projects/webos-pro ..
    $ make
    $ make install

will install the files in subdirectories of `$HOME/projects/webos-pro`.

Specifying `WEBOS_INSTALL_ROOT` also causes `pkg-config` to look in that tree
first before searching the standard locations. You can specify additional
directories to be searched prior to this one by setting the `PKG_CONFIG_PATH`
environment variable.

If not specified, `WEBOS_INSTALL_ROOT` defaults to `/usr/local/webos`.

To configure for a debug build, enter:

    $ cmake -D CMAKE_BUILD_TYPE:STRING=Debug ..

To see a list of the make targets that `cmake` has generated, enter:

    $ make help

## Uninstalling

From the directory where you originally ran `make install`, enter:

    $ [sudo] make uninstall

You will need to use `sudo` if you did not specify `WEBOS_INSTALL_ROOT`.

# Copyright and License Information

Unless otherwise specified, all content, including all source code files and
documentation files in this repository are:

Copyright (c) 2017 LG Electronics, Inc.

Confidential computer software. Valid license from LG required for
possession, use or copying. Consistent with FAR 12.211 and 12.212,
Commercial Computer Software, Computer Software Documentation, and
Technical Data for Commercial Items are licensed to the U.S. Government
under vendor's standard commercial license.
