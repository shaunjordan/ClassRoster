// ClassRoster.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "student.h"

using namespace std;

int main()
{
	// Instantiation test
	int values[3] = {11,2,8};
	Student student1("A1", "Bobby", "Mills", "grahamCrackers@gmail.com", 31, values, SOFTWARE);
	student1.print();
	


	system("pause");

    return 0;
}

