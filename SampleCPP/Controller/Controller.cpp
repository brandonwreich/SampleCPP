//
//  Controller.cpp
//  SampleCPP
//
//  Created by Reich, Brandon on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    this -> specialNumber = 2;
    this -> favoriteWord = "Kaitlyn";
}

void Controller :: start()
{
    for (int index = 13; index <= 31; index++)
    {
        cout << index << endl;
    }
    
    string name = "Brandon Reich";
    int age = 17;
    
    cout << name << " is " << age << " years old." << endl;
    
    string * namePointer;
    int * agePointer;
    namePointer = &name;
    agePointer = &age;
    
    cout << namePointer << " is " << agePointer << " years old." << endl;
    
    useVector();
}

void Controller :: useVector()
{
    vector<int> numbers;
    
    // Adds to the vector to the end
    numbers.push_back(specialNumber);
    numbers.push_back(56);
    
    cout << "This size of my vector is: " << numbers.size() << endl;
    
    // Returns a boolean value to see if it is empty
    numbers.empty();
    
    cout << "This size of my vector is: " << numbers.size() << endl;
    
    // Deletes the LAST item
    numbers.pop_back();
    
    cout << "This size of my vector is: " << numbers.size() << endl;
    
    // Clears the vector
    numbers.clear();
    
    cout << "This size of my vector is: " << numbers.size() << endl;
    
}
