/*
This is the header file

*/

///////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once

#include <string>
#include <vector>
#include <gflags/gflags.h>
#include <iostream>

#ifdef _WIN32
#include <os/windows/w_dirent.h>
#else
#include <dirent.h>
#endif


bool FLAGS_auto_resize = false;
double FLAGS_t = 0.5;
bool FLAGS_pc = false;

// pruposely write