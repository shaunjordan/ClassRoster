// ClassRoster.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "student.h"

using namespace std;

int main()
{
	int values[3] = {11,2,8};

	Student student1("A1", "Bobby", "Mills", "bmills@gmail.com", 31, values, SOFTWARE);
	/*
	int courseDays[3] = {2,8,19};

	student1.setStudentID("A1");
	student1.setAge(3);
	student1.setFirstName("Karen");
	student1.setLastName("McGusky");
	student1.setEmail("opey@hotmail.com");
	student1.setDaysInCourse(courseDays);
	int test = student1.getDaysInCourse();

	cout << student1.getStudentId() << endl;
	cout << student1.getAge() << endl;
	cout << student1.getFirstName() << endl;
	cout << student1.getLastName() << endl;
	cout << student1.getEmail() << endl;
	cout << test << test + 1 << test + 2 << endl;
	*/

	int a = student1.getDaysInCourse();

	cout << student1.getEmail() << endl;
	cout << student1.getDaysInCourse() + 1 << endl;
	cout << student1.getDegreeName() << endl;

	system("pause");

    return 0;
}

