//
//  main.cpp
//  Final Project
//
//  Created by Derek Eckman on 6/27/17.
//  Copyright © 2017 Derek Eckman. All rights reserved.
//


/// i'm not lying when I say this: I used only my code and everything is mine, Derek Eckman.
//I had the hardest time with saving the information of .addemployee and .addmanager to the vector and then searching them. I even emailed two students at whitworth that are CS majors and they had a hard time with figuring out what I was trying to do with my pointers and saving to a vector.
//I really enjoy c++ when I get it and the struggle with this was I just simply didnt believe your videos helped me but the emails back and forth helped more.
//My favorite thing part of this class was that I can now (to the best of my ability) code projects that fit my life and make fit my specific type of problems I run into.

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
#include "Employee Class.cpp"
#include "Employee Class.hpp"
#include <fstream>
#include "Manager.cpp"

using namespace std;

//functions
void manageroptions();
void employeeoptions();
void addemployee();
void addmanager();
void printemployee();
bool manager();
void statusofuser();
void printfile();
void fireemployee();

int main()
{
    
    //create vector
    
    vector<employee> database;
    
    ofstream outfile;
    
    cout << "Welcome to Northwest Coffee database! " << endl;
    cout << endl;
    
    
    
    
    ///show menu
    cout << "1) I am a manager. " << endl;
    cout << "2) I am an employee. " << endl;
    
    int menuselect = 0;
    
    cin >> menuselect;

    
   
 
    switch (menuselect)
    {
        case 1:
            manageroptions();
            break;
        case 2:
            employeeoptions();
            break;
            
        default: cout << "Error wrong choice. ";
    }
    
    return 0;
}



void manageroptions(){
    int Mselect;
    
    cout << "1) Print data base. " << endl;
    cout << "2) Fire an employee. " << endl;
    cout << "3) Add an employee. " << endl;
    cout << "4) Exit. " << endl;
    
    cin >> Mselect;
    
    switch (Mselect) {
        case 1:

            printfile();
            
            break;
        case 2:
           
            fireemployee();
            
        case 3:
            addemployee();
            break;
            
        default: cout << "Wrong option. " << endl;
            break;
    }
}

void employeeoptions()
{
    //search name in database to see info.
    //get wage only
    
    ofstream outfile ("Northwest.txt") ;
    string searchname;
    cout << "What is your name: " << endl;
    
    cin >> searchname;
    
   if (searchname == )

    

}
void addemployee()
{
    ofstream outfile("Outfile.txt");
    vector<employee> databaseE;
    string name, timeoffrequests;
    char status;

    int adding, experience;
    int experience, month, day, year;
    cout << "How many employees are you adding? " << endl;
    cin >> adding;
    employee* one;
    one = new employee();
    
    ////for loop that sets a name in each line of a vector.
    //this uses the employee class.    for (int k = 0; k < adding; k++)
    
    for (int k = 1; k < adding; k++)
    {
       
        cout << "What is the name of employee "<< k << endl;
            cin >> name;
        one->setname(name);
            cout<<"\nEnter years of experience with coffee :" << endl;
            cin>> experience;
        one->setexperience(experience);
            cout << "Enter gender. (M or F) " << endl;
            cin >> status;
        one->setstatus(status);
            cout << "Enter the month. " << endl;
            cin >> month;
            cout << "Enter the day. " << endl;
            cin >> day;
            cout << "Enter the year. " << endl;
            cin >> year;
        one->sethireddate(month, day, year);
        one->setid(k);
        databaseE.push_back(one);
    }
}


    ////CHAd I dont know how to save a new employee to the outfile.txT!!!!
    
    //SAME with the manager fucntion
    
    
    
    data[j] = new employee(name, experience, status, timeoffrequests, month, day, year);
    databaseE.push_back(new employee(name, experience,status,timeoffrequests,month,day,year));
    data[j]->save("outFile.txt");
    j++;
    
    
    void addmanager()
    {
        ofstream outfile("Outfile.txt");
        vector<manager> databaseM;
        string name, timeoffrequests;
        char status;
        double salary;
        int j, experience, month, day, year;
        manager boss;
        boss = new manager();
        
     
        for (int k = 0; k < adding; k++)
        {
        cout<<"Enter first name for employee" << k << endl;;
        cin >> name;
            boss-> setname(name);
            
        cout<<"\nEnter years of experience with coffee :" << endl;
        cin>> experience;
            boss-> setexperience(experience);
        cout << "Enter gender. (M or F) " << endl;
        cin >> status;
            boss-> setstatus(status);
        cout << " Salary set: "
        cin >> salary;
            boss-> setsalary(salary);
            
        cout << "Enter the month. " << endl;
        cin >> month;
        cout << "Enter the day. " << endl;
        cin >> day;
        cout << "Enter the year. " << endl;
        cin >> year;
            boss-> sethireddate(month, day, year);
            
            boss -> setid(k);
            
        }
        
        data[j]=new Manager(name, age, salary, meetingsamonth, status, day, month, year);
        databaseM.push_back (new manager(name, status, month, day, year, ));
        databaseM->save("outFile.txt");
        j++;
    }
    
void statusofuser()
{
    
    ///using strings to check if the user is an employee or employee.
    cout << "Type //Manager or //Employee. " << endl;
    cin >> postion;
    if (postion == "manager")
    {
        if (manager() = true);
        {
        manageroptions();
        }
    }
    else
        cout << "Wrong password. You are allowed employee axcess. " << endl;
        employeeoptions();
    
}


bool manager()
{
    //password check for managers.
    string password;
    cout << "Enter password. " << endl;
    cin >> password;
    if (password == "northwest")
    {
        return true;
    }
    else
        return false;
}

void printfile()
{
    //Take vector. DatabaseE= employee vector.
    //print each individual info.
    
}
void fireemployee()
    {
        //search a name in the employee vector and take them out.
        //search the name and take down the vector size and .push_down.
    }
