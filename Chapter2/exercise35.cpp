//
//  exercise35.cpp
//  SelfTestExercise
//
//  Created by Zakaria Ahmed on 27/09/15.
//  Copyright © 2015 ProblemSolvingWithCpp. All rights reserved.
//

/* 
 exercise 35. 
 The following if-else statement will compile and run without any problems. However, it is not laid out in a way that is consistent with the other if-else statements we have used in our programs. Rewrite it so that the layout (indenting and line breaks) matches the style we used in this chapter.
 if (x < 0) {x = 7; cout << "x is now positive.";} else {x = - 7; cout << "x is now negative.";}
 */

#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int x = 0;
    
    if (x < 0) {
        x = 7; cout << "x is now positive.";}
    
    else
    {
        x = - 7; cout << "x is now negative.";
    }
    
    return 0;
}
