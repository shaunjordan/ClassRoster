#include "stdafx.h"
#include <iostream>


#include "student.h"
using namespace std;

// setters

void Student::setStudentID(string id) {
	studentID = studentID;
	return;
}

void Student::setFirstName(string fn) {
	firstName = firstName;
	return;
}

void Student::setLastName(string ln) {
	lastName = lastName;
	return;
}

void Student::setEmail(string email) {
	emailAddress = email;
	return;
}

void Student::setAge(int studentAge) {
	age = age;
	return;
}

void Student::setDaysInCourse(int *days) {
	for (int i = 0; i < 3; i++) {
		daysInCourse[i] = days[i];
	}
	return;
}

void Student::setDegree(Degree degree) {
	degreeName = degree;
}


// getters
//FIXME: add setter and getter for Degree

string Student::getStudentID() const{
	return studentID;
}

string Student::getFirstName() const {
	return firstName;
}

string Student::getLastName() const {
	return lastName;
}

string Student::getEmail() const {
	return emailAddress;
}

int Student::getAge() const {
	return age;
}

int* Student::getDaysInCourse(){
	return daysInCourse;
}

Degree Student::getDegreeName() const {
	return degreeName;
}

void Student::print() {

	int *courseDays = getDaysInCourse();

	cout << firstName << " " << lastName << endl;
	cout << emailAddress << endl;
	cout << "Age: " << age << endl;
	cout << "Days in course: " << *courseDays << " " << *(courseDays +1) << " " << *(courseDays + 2) << endl;
	
	if (getDegreeName() == 0) {
		cout << "Security" << endl;
	}
	else if (getDegreeName() == 1) {
		cout << "Networking" << endl;
	}
	else if (getDegreeName() == 2) {
		cout << "Software" << endl;
	}
}

Student::Student(string id, string fn, string ln, string email, int studentAge, int * days, Degree degree){
	studentID = id;
	firstName = fn;
	lastName = ln;
	emailAddress = email;
	age = studentAge;
	setDaysInCourse(days);
	degreeName = degree;
}

Student::~Student(){}


Degree Student::getDegreeProgram() {
	return Degree();
}
