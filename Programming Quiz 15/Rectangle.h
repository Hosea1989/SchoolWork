//
//  Rectangle.hpp
//  Module_15_Prog_Quiz
//
//  Created by Damien Hosea on 11/10/19.
//  Copyright © 2019 Damien Hosea. All rights reserved.
//

#ifndef Rectangle_h
#define Rectangle_h
#include "Base_Shape_Class.h"

class Rectangle : public BaseShape
{
private:
    long width;
    long length;
public:
    //Default Constructor
    Rectangle()
    { width = 0;length = 0; }
    
    //Function prototype
    void CalcArea(long int, long int);
    
    //Constructor
    Rectangle(long int w, long int len):BaseShape()
    { width = w;
      length = len;
      CalcArea(w, len); }
    
};
//#include <stdio.h>

#endif /* Rectangle_hpp */
