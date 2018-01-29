//
//  Controller.cpp
//  VectorProgram
//
//  Created by Montoya, Aaron on 1/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include <iostream>
#include <vector>

using namespace std;

Controller::Controller()
{
    
}

void Controller::vectors()
{
    vector<int> numbers (4, 7);
    
    for(int num = 0; num < numbers.size(); num++)
    {
        cout << numbers.at(num) << endl;
    }
    
    vector<string> words;
    words.push_back("Bob");
    words.push_back("Gilmo");
    
    for(int i = 0; i < words.size(); i++)
    {
        cout << words.at(i) << endl;
    }
}
