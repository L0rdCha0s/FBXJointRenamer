/****************************************************************************************

   Copyright (C) 2014 Autodesk, Inc.
   All rights reserved.

   Use of this software is subject to the terms of the Autodesk license agreement
   provided at the time of installation or download, or which otherwise accompanies
   this software in either electronic or hard copy form.

****************************************************************************************/

#ifndef _DISPLAY_SKELETON_H
#define _DISPLAY_SKELETON_H

#include "DisplayCommon.h"
#include <map>

void DisplaySkeleton(FbxNode* pNode, std::map<std::string, std::string> jointMap);

#endif // #ifndef _DISPLAY_SKELETON_H


