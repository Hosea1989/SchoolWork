//
//  Rectangle.cpp
//  Module_15_Prog_Quiz
//
//  Created by Damien Hosea on 11/10/19.
//  Copyright © 2019 Damien Hosea. All rights reserved.
//

#include "Rectangle.h"
void Rectangle::CalcArea(long int width, long int length)
{
    double a;
    
    a = (length * width);
    setArea(a);
}
