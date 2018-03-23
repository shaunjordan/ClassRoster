// ClassRoster.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>

#include "student.h" //FIXME: remove when program is completed - student.h is reference in roster.h

#include "roster.h"

using namespace std;

void Roster::add(string studentId, string fName, string lName, string email, int studentAge, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree) {
	//instantiate appropriate classes based on degree value
	
	//test case
	string classRosterArray[] = {"A1", "Shaun","Jordan","fliberty@gibbits.com","23","3","4","28","SOFTWARE"};

	//classRosterArray[0] = new SoftwareStudent(studentId, fName, lName, email, stoi(studentAge), stoi(daysInCourse1), daysInCourse2, daysInCourse3, degree);

}

void Roster::remove(string studentId){
	//remove student from roster based on student id
}

void Roster::printAll() {
	// print student info
}

void Roster::printDaysInCourse(string studentId) {
	//prints a student's average number of days in 3 courses
}

void Roster::printInvalidEmails() {
	//verifies student emails and displays the invalid emails
}

void Roster::printByDegreeProgram(int degreeProgram) {
	//prints out student information based on degree program value
}

Roster::~Roster() {};

int main()
{

	cout << "Scripting and Programing Applications - C867" << endl;
	cout << "C++" << endl;
	cout << "Student ID: 000866116" << endl;
	cout << "Shaun Jordan\n" << endl;


	/* Instantiation test
	* int values[3] = {11,2,8};
	* Student student1("A1", "Bobby", "Mills", "grahamCrackers@gmail.com", 31, values, SOFTWARE);
	* student1.print();
	*/
	
	const string studentData[] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Shaun,Jordan,sjord75@wgu.edu,32,2,4,28,SOFTWARE"
	};


	
	system("pause");

    return 0;
}

