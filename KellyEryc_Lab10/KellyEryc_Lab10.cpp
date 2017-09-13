/*////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Filename: KellyEryc_lab10.cpp
//	Date: 4/15/17
//	Programmer: Eryc Kelly
//
//	Description:     In this program the user can make a list of up to 100 people 
					that will be sorted by age Lowest to Highest.
//		 			
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

#include <iostream>
#include <string>
#include <iomanip>
#include "Person.h"

using namespace std;

int main() {
	//cosnt varibale for array size
	const int ARRAY_SIZE = 100;
	//instentiatite list of persons
	Person *person = new Person[ARRAY_SIZE];

	//variable declaration
	string name;
	char addAnother;
	int age;
	int totalPeople = 0;
	

	do {

		//prompt user
		cout << "Enter a name to add to the list of people: ";
		cin >> name;
		//prompt user
		cout << "How old is " << name << " : ";
		cin >> age;
		//assign values to person at n index
		person[totalPeople] = Person(name, age);
		//prompt user 
		cout << "Would you like to add another person to the list (y/n) ";
		cin >> addAnother;
		//increase total people
		totalPeople++;
		if (totalPeople == 100) {
			cout << "That is the max number of people you may add to the list." << endl;
			break;
		}

	} while (addAnother != 'n' && totalPeople != 101);

	//variables for the bubble sort
	int tempNum;
	string tmpName;

	//Bubble sort
	for (int iteration = 0; iteration < totalPeople- 1; iteration++)
	{
		for (int index = 0; index < (totalPeople - iteration - 1); index++)
		{
			if (person[index].age > person[index + 1].age)
			{
				tempNum = person[index + 1].age;
				person[index + 1].age = person[index].age;
				person[index].age = tempNum;

				tmpName = person[index + 1].name;
				person[index + 1].name = person[index].name;
				person[index].name = tmpName;
			}
		}
	}

	//display all the peoples
	for (size_t i = 0; i < totalPeople; i++)
	{
		cout << "Name: " << person[i].name << " Age: " << person[i].age << endl;
	}

	return 0;
}