/*//////////////////////////////////////////////////////////////////////
//
// Class: Person                                          
//                                                                   
// Description:
//    Class that will used to define a person      
//
//    List of data members:
//       Public:
//				    int age: a variable for the objects age
//			    string name: a variable for the objects name
//
//			       Person(): Default Constructor
//	Person(string name, int age): Constructor that will set the name and age
//
//                                         
// 
//////////////////////////////////////////////////////////////////////*/

#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Person
{
public:
	//variables
	int age;
	string name;
	//contructors
	Person();
	Person(string name, int age);
};

