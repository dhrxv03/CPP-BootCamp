//
//  main.cpp
//  LCO Assignment 1
//
//  Created by Dhruv Shah on 08/05/21.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fname,lname;
    cout <<"Enter Your First Name:- \n";
    getline(cin,fname);
    cout <<"Enter Your Last Name:- \n";
    getline(cin,lname);
    cout <<"Hello "<< fname <<" "<< lname <<" Nice to meet You!\n";
    return 0;
}
