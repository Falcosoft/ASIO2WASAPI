/*  ASIO2WASAPI Universal ASIO Driver
    Copyright (C) Lev Minkovsky
    
    This file is part of ASIO2WASAPI.

    ASIO2WASAPI is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    ASIO2WASAPI is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with ASIO2WASAPI; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#pragma once

#define WINVER 0x0600	
#define _WIN32_WINNT 0x0600
#define _WIN32_IE 0x0600
#define NTDDI_WIN6 0x06000000

#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <string>
#include <windows.h>
#include <shellapi.h>



