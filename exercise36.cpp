//
//  main.cpp
//  SelfTestExercise
//
//  Created by Zakaria Ahmed on 27/09/15.
//  Copyright © 2015 ProblemSolvingWithCpp. All rights reserved.
//
/* exercise 36 Write a complete C++ program that asks the user for a number of gallons and then outputs the equivalent number of liters. There are 3.78533 liters in a gallon. Use a declared constant. Since this is just an exercise, you need not have any comments in your program. */

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    
    const double LITERES_PER_GALLON = 3.78533;
    double gallons, liters;
    
    cout << "How many gallons of water do you drink in a day ?" << endl;
    cin >> gallons;
    
    liters = gallons * LITERES_PER_GALLON;
    
    cout << "So you drink around " << liters << " liters a day" << endl;
    
    return 0;
}
