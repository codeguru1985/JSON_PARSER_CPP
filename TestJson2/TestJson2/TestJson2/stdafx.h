// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>


#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // some CString constructors will be explicit

#include <cpprest/json.h>                       // JSON library

using namespace web::json;                                  // JSON library

//#pragma comment (lib, "winhttp.lib")

/*#include <atlbase.h>
#include <atlstr.h>

#include <cpprest\json.h>
#include <cpprest\http_client.h>

#pragma comment (lib, "winhttp.lib")
#pragma comment (lib, "ws2_32.lib")
#pragma comment (lib, "crypt32.lib")

using namespace web::json;*/



// TODO: reference additional headers your program requires here
