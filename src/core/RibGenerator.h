/*****************************************************************************
 * Larmor-Physx Version 1.0 2013
 * Copyright (c) 2013 Pier Paolo Ciarravano - http://www.larmor.com
 * All rights reserved.
 *
 * This file is part of Larmor-Physx (http://code.google.com/p/larmor-physx/).
 *
 * Larmor-Physx is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Larmor-Physx is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Larmor-Physx. If not, see <http://www.gnu.org/licenses/>.
 *
 * Licensees holding a valid commercial license may use this file in
 * accordance with the commercial license agreement provided with the
 * software.
 *
 * Author: Pier Paolo Ciarravano
 * $Id$
 *
 ****************************************************************************/

#ifndef RIBGENERATOR_H_
#define RIBGENERATOR_H_

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits>
#include <math.h>

#include "../shatter/MeshViewer.h"
#include "../shatter/CutterMesher.h"
#include "../shatter/Custom.h"
#include "../shatter/util.h"
#include "../shatter/DelaunayVoronoi.h"

#include "core_classes.h"

namespace LarmorPhysx
{

	typedef boost::unordered_map<PairUnsignedInt, DynamicObject> MapOrderedPairDynamicObject;
	typedef std::pair<PairUnsignedInt, DynamicObject> PairDynamicObject;

	void generateRIB();
	void generateRIBScene(unsigned int idFrame, DynamicObjectVector &dynamicObjects);
	void generateRIBSceneMotionBlur(unsigned int idFrame, DynamicObjectVector &dynamicObjects,
			MapOrderedPairDynamicObject &mapIdFrameIdObjectToDynamicObjects);
	void generateRIBFrame(unsigned int idFrame, unsigned int diplayImageNumber);
	void generateRIBCamera(unsigned int idFrame);
	void generateRIBMesh(StaticObject &staticObject);

}

#endif /* RIBGENERATOR_H_ */
