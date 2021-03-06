//-----------------------------------------------------------------------------
//
//	GraphStudioNext
//
//	Author : CPlusSharp
//
//-----------------------------------------------------------------------------
#pragma once

#ifndef _SECURE_ATL
#define _SECURE_ATL 1
#endif

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers
#endif

// Modify the following defines if you have to target a platform prior to the ones specified below.
// Refer to MSDN for the latest info on corresponding values for different platforms.
#ifndef WINVER				// Allow use of features specific to Windows XP or later.
#define WINVER 0x0601		// Change this to the appropriate value to target other versions of Windows.
#endif  // 0x0501

#ifndef _WIN32_WINNT		// Allow use of features specific to Windows XP or later.                   
#define _WIN32_WINNT 0x0601	// Change this to the appropriate value to target other versions of Windows.
#endif						

#ifndef _WIN32_WINDOWS		// Allow use of features specific to Windows 98 or later.
#define _WIN32_WINDOWS 0x0410 // Change this to the appropriate value to target Windows Me or later.
#endif

#ifndef _WIN32_IE			// Allow use of features specific to IE 6.0 or later.
#define _WIN32_IE 0x0600	// Change this to the appropriate value to target other versions of IE.
#endif

// MFC inclusion to support analyzer property page
#include <afxwin.h>
#include <afxcmn.h>
#include <afxdlgs.h>

#include <atlbase.h>
#include <atlstr.h>
#include <atlpath.h>
#include <afxtaskdialog.h>

#include <streams.h>
#include <sbe.h>

#include "..\..\Crc32.h"
#include "..\..\HiResTimer.h"

#include "analyzer_h.h"
#include "..\..\..\lib\sqlite\sqlite3.h"
#include "analyzer.h"

#include "filter_analyzer.h"
#include "filter_analyzer_writer.h"

#include "analyzer_proppage_config.h"

// GraphStudio Dependencies of AnalyzerPage

#include <initguid.h>
#include <comdef.h>

#include <dvdmedia.h>

#pragma comment(lib, "Quartz.lib")

#include <vector>
using namespace std;

#define GUID_LIST_SUPRESS_GUIDS		// leave out all the guid processing stuff

// Copied from GraphStudio sfdafx.h
#define GRAPHSTUDIO_NAMESPACE_START		namespace GraphStudio { 
#define GRAPHSTUDIO_NAMESPACE_END		}

class EVR_VideoWindow;

namespace XML
{
	class XMLNode;
}

#include "..\..\dsutil.h"
#include "..\..\renderparameters.h"
#include "..\..\display_graph.h"

#include "..\..\title_bar.h"
#include "..\..\CustomPage.h"

#include "analyzer_proppage_resource.h"
#include "..\..\AnalyzerPage.h"

#define GUID_LIST_SUPRESS_GUIDS		// leave out all the guid processing stuff, which should be in separate module really