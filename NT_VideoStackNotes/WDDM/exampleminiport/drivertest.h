#pragma once
// Standard C-runtime headers
#include <stddef.h>
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <initguid.h>
// NTOS headers
#include <ntddk.h>
#ifndef FAR
#define FAR
#endif
// Windows headers
#include <windef.h>
#include <winerror.h>
#include <wingdi.h>
#include <d3dkmddi.h>
#include <dispmprt.h>
#include "OpenWDDMpub.h"