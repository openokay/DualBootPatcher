/*
 * Copyright 2013 bigbiff/Dees_Troy TeamWin
 * This file is part of TWRP/TeamWin Recovery Project.
 *
 * TWRP is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * TWRP is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with TWRP.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "gui/objects.hpp"

// GUIFill - Used for fill colors
class GUIFill : public GUIObject, public RenderObject
{
public:
    GUIFill(xml_node<>* node);

public:
    // Render - Render the full object to the GL surface
    //  Return 0 on success, <0 on error
    virtual int Render();

protected:
    COLOR mColor;
};
