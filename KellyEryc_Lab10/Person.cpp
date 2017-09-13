#include "Person.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Person::Person()
{

}

Person::Person(string name, int age)
{
	Person::name = name;
	Person::age = age;
}
