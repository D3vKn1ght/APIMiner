/*
APIMiner Sandbox - Automated Malware Analysis.
Copyright (C) 2015-2017 APIMiner Foundation.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// This program tests whether the monitor is easily detectable in-memory by
// trying to get a handle to it. Normally the monitor should unlink itself
// from the PEB rendering this particular approach useless.

/// FINISH= yes
/// PIPE= yes

#include <windows.h>
#include "hooking.h"
#include "native.h"
#include "pipe.h"

#define assert(expr) \
    if((expr) == 0) { \
        pipe("CRITICAL:Test didn't pass: %z", #expr); \
    } \
    else { \
        pipe("INFO:Test passed: %z", #expr); \
    }

int main()
{
    pipe_init("\\\\.\\PIPE\\apiminer", 0);

    assert(GetModuleHandle("monitor-x86.dll") == NULL);
    assert(GetModuleHandle("monitor-x64.dll") == NULL);
    pipe("INFO:Test finished!");
    return 0;
}
