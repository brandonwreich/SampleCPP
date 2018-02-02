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
#include <string>
#include <vector>

using namespace std;

class Controller
{
private:
    // Data members and helper methods
    int specialNumber;
    string favoriteWord;
    int * nuumberPointer;
    
protected:
    // Things that need to only be used by subclasses
    
public:
    // Anyone can see this
    Controller();
    void start();
    void useVector();
};

#endif /* Controller_hpp */

