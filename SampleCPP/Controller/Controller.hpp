//
//  Controller.hpp
//  SampleCPP
//
//  Created by Reich, Brandon on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>

using namespace std;

class Controller
{
private:
    // Data members and helper methods
protected:
    // Things that need to only be used by subclasses
public:
    // Anyone can see this
    
    // This is a prototype
    Controller();
    void start();
    
    string food [4] = {"Donuts", "Waffles", "Eggs", "Chicken Nuggets"};
    int index, result = 0;
    
        };
#endif /* Controller_hpp */
