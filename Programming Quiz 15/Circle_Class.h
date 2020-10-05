//
//  Circle_Class.hpp
//  Module_15_Prog_Quiz
//
//  Created by Damien Hosea on 11/8/19.
//  Copyright © 2019 Damien Hosea. All rights reserved.
//

#ifndef Circle_Class_h
#define Circle_Class_h
#include "Base_Shape_Class.h"

class Circle : public BaseShape
{
private:
    long int centerX; //Used to hold the X coordinate
    long int centerY; //Used to hold the Y coordinate
    double radius; //Used to hold the radius of the Circle
public:
    //Function prototype for Cal
    void CalcArea (double r);
    
    //Constructor
    Circle(long int X, long int Y, double R):BaseShape()
    { centerX = X;
      centerY = Y;
      radius = R;
    CalcArea(R);}
    
    //Member functions
    long getCenterX() const
    { return centerX; }
    
    long getCenterY() const
    { return centerY; }
    
};
#endif /* Circle_Class_hpp */
