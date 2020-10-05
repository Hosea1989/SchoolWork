//
//  Base_Shape_Class.hpp
//  Module_15_Prog_Quiz
//
//  Created by Damien Hosea on 11/8/19.
//  Copyright © 2019 Damien Hosea. All rights reserved.
//

#ifndef Base_Shape_Class_h
#define Base_Shape_Class_h

class BaseShape
{
private:
    double area; //Variable used by Circle and Rectangle class
public:
    //Accessor
    double getArea() const
    { return area; }
    
    //Mutator
    void setArea(double a)
    { area = a; }
    
    // calcArea Function
    void CalcArea();
};

#endif /* Base_Shape_Class_hpp */


