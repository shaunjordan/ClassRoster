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

	cout << studentID << endl;
	cout << "First Name: " << firstName << "\t" << "Last Name: " << lastName << "\t" << "Age: " << age << "\t";
	cout << "daysInCourse: {" << *courseDays << " " << *(courseDays + 1) << " " << *(courseDays + 2) << "}" << "\t";
	
	if (getDegreeName() == 0) {
		cout << "SECURITY" << endl;
	}
	else if (getDegreeName() == 1) {
		cout << "NETWORK" << endl;
	}
	else if (getDegreeName() == 2) {
		cout << "SOFTWARE" << endl;
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
