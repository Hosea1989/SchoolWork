//
//  Circle_Class.cpp
//  Module_15_Prog_Quiz
//
//  Created by Damien Hosea on 11/8/19.
//  Copyright © 2019 Damien Hosea. All rights reserved.
//

#include "Circle_Class.h"

//Function definition for Circle:CalcArea
void Circle::CalcArea(double radius)
{   double a;
    a = (3.14159 * radius * radius);
    setArea(a); }
