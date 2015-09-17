//
//  Question 1.cpp
//
//  Created by Rebecca Rucks on 9/17/15.
//  Copyright (c) 2015 Rebecca Rucks. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;
    float s, area, perimeter;
    
    cout << "Enter the dimensions of the triangle: \n";
    cout << "Side-1: ";
    cin >> a;
    cout << "\nSide-2: ";
    cin >> b;
    cout << "\nSide-3: ";
    cin >> c;
    
    if (a>b+c || b>a+c || c>a+b)
    {
        cout << "Dimensions " << a << ", " << b << ", " << c << " do not form a triangle." << endl;
    }
    
    else
    {
        s = 0.5*(a+b+c);
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        perimeter = a+b+c;
        cout << "The triangles area is " << area << " square-units and its perimeter is " << perimeter << " units." << endl;
    }
    
    return 0;
}