//
//  main.cpp
//  Module_15_Prog_Quiz
//
//  Created by Damien Hosea on 11/8/19.
//  Copyright © 2019 Damien Hosea. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include "Circle_Class.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    long int X;
    long int Y;
    double R;
    
    cout << " Enter the X coordinate of the circle's center: ";
    cin >> X;
    
    cout << " Enter the Y coordinate of the circle's center: ";
    cin >> Y;
    
    cout << " Enter the Radius for the circle: ";
    cin >> R;
    
    Circle circle(X, Y, R);
    
    cout << showpoint << setprecision(4);
    cout << " The AREA of the circle is: "
         << circle.getArea()<<endl;
    
    long int width;
    long int length;
    
    cout << " Enter the LENGTH of the rectangle: ";
    cin >> length;
    
    cout << " Enter the WIDTH of the rectangle: ";
    cin >> width;
    
    Rectangle rectangle (width, length);
    
    cout << " The area of the RECTANGLE is: ";
    cout << rectangle.getArea()<<endl;
    
}


