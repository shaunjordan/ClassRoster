// ClassRoster.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <regex>

#include "student.h" //FIXME: remove when program is completed - student.h is reference in roster.h

#include "roster.h"


using namespace std;

void Roster::add(string studentId, string fName, string lName, string email, int studentAge, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree) {

	//cout << "Function called" << endl;

	int daysInCourse[3] = {daysInCourse1, daysInCourse2, daysInCourse3};
		
	for(int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[i]); i++){
		
		if(classRosterArray[i] == nullptr){
			switch (degree)
			{
			case SECURITY:
				classRosterArray[i] = new SecurityStudent(studentId, fName, lName, email, studentAge, daysInCourse, degree);
				break;
			case NETWORKING:
				classRosterArray[i] = new NetworkStudent(studentId, fName, lName, email, studentAge, daysInCourse, degree);
				break;
			case SOFTWARE:
				classRosterArray[i] = new SoftwareStudent(studentId, fName, lName, email, studentAge, daysInCourse, degree);
				break;
			default:
				cout << "Degree type not recognized" << endl;
				break;
			}
		}
	}
}

void Roster::test() {
	
}

void Roster::remove(string studentId){
	//remove student from roster based on student id
}

void Roster::printAll() {
	/*
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[i]); i++) {
		
	}
	*/
	classRosterArray[1]->print();
}

void Roster::printDaysInCourse(string studentId) {
	//prints a student's average number of days in 3 courses
}

void Roster::printInvalidEmails() {
	
	regex check("(\\S+)@(\\S+)\\.(\\S+)");

	
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

	Roster classRoster;

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
	
	for (int i = 0; i < sizeof(studentData) / sizeof(string); i++) {

		
		istringstream iss(studentData[i]);
		string parsedElem;
		string parsedArr[9];
		Degree degree;

		int j = 0;

		/*
		* getline reads iss up to the delimiter.
		* the value read not including the delimiter is assigned to
		* parsedElem which is then given to parsedArr[pos. j]
		* note: value is destroyed before it is returned
		* so on each pass, iss loses an element
		* ex. after the initial pass
		* parsedArr = {"A1", "John", "Smith",..}
		*/

		while(getline(iss, parsedElem, ',')){
			parsedArr[j] = parsedElem;
			j++;
		}

		if (parsedArr[8] == "SECURITY") {
			degree = SECURITY;
		}
		else if (parsedArr[8] == "NETWORK") {
			degree = NETWORKING;
		}
		else if (parsedArr[8] == "SOFTWARE") {
			degree = SOFTWARE;
		}
	

		// parsedArr[] values: 0. studentId, 1. firstName, 2. lastName, 3. email, 4. age, 5. daysInCourse1, 6. daysInCourse2, 7. daysInCourse3, 8. degree
		classRoster.add(parsedArr[0],parsedArr[1],parsedArr[2],parsedArr[3],stoi(parsedArr[4]),stoi(parsedArr[5]),stoi(parsedArr[6]),stoi(parsedArr[7]), degree);
		
				
	}

	//classRoster.test(); FIXME: remove this test
	classRoster.printAll();
	system("pause");

    return 0;
}

