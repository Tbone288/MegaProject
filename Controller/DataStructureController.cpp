//
//  DataStructureController.cpp
//  MegaProject
//
//  Created by Odom, Tyler on 2/8/17.
//  Copyright © 2017 Odom, Tyler. All rights reserved.
//

#include "DataStructureController.hpp"
#include <iostream>
#include "../Model/IntNode.hpp"
using namespace std;

DataStructureController :: DataStructureController()
{
    
}

void DataStructureController :: start()
{
    cout << "Starting the project" << endl;
    cout << "Switching to the array testing" << endl;
    testIntArray();
    cout << "Finished testing" << endl;
}

void DataStructureController:: testIntArray()
{
    cout << "Testing the array" << endl;
}
