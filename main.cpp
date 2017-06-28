//
//  main.cpp
//  Final Project
//
//  Created by Derek Eckman on 6/27/17.
//  Copyright © 2017 Derek Eckman. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
#include "Employee Class.cpp"
#include "Employee Class.hpp"




using namespace std;


class employee{
private:
    string name;
    int id;
    string postion;
public :
    employee(string name, int id, string postion)
    {
        name = "Bill";
        id = 1;
        postion = "VP";
    }
    employee();
    
    
   //questionable
     void clearlist();
    void addemployee(string);
    void fireemployee(string);
    
    
    
    
    
    
};


void statusofuser()
{
    cout << "Are you a manager or employee? " << endl;
    string postion;
    cin >> postion;
    if (postion == "manager" || postion == )
        manager();
    else
        employeeaxcess();
    
}

void employeeaxcess()
{
    cout << "Welcome!"
    
}

bool manager()
{
    string password;
    cout << "Enter password. " << endl;
    cin >> password;
    if (password == "northwest")
    {
        true;
    }
    else
        false;
    }

void printemployee()
{
    
    cout << name.getname << setw(5) << name.getid << setw(5) << 
    
}
int main(){
    //asking if manager or employee
    
    statusofuser();
    
    //new or existing?
    cout << "Are you a new employee or existing? " << endl;
    cin >>
    
    
    //asking employee about information
    cout << "What information were you looking for today? " << endl;
    infomenu();
    
    //setting id to employee
    
    
    //saving employees to file
    
    
    printemployee();
    
    
    
    //manager can axcess file

    
    
    
    
    

}




