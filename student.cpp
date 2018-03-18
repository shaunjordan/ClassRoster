#include "stdafx.h"
#include <iostream>
#include <string>

#include "student.h"
using namespace std;

// setters

void Student::setStudentID(string id) {
	studentID = id;
	return;
}

void Student::setFirstName(string fn) {
	firstName = fn;
	return;
}

void Student::setLastName(string ln) {
	lastName = ln;
	return;
}

void Student::setEmail(string email) {
	emailAddress = email;
	return;
}

void Student::setAge(int age) {
	age = age;
	return;
}


void Student::setDaysInCourse(int * days) {
	for (int i = 0; i < 3; i++) {
		daysInCourse[i] = days[i];
	}
	return;
}


// getters
//FIXME: add setter and getter for Degree

string Student::getStudentId() const {
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

int Student::getDaysInCourse() const {
	return *daysInCourse;
}

Degree Student::getDegreeName() const {
	return Degree();
}

void Student::print() {

}

Student::Student(string studentID, string firstName, string lastName, string email, int age, int * days, Degree degreeName){
	studentID = studentID;
	firstName = firstName;
	lastName = lastName;
	emailAddress = email;
	age = age;
	setDaysInCourse(days);
	degreeName = degreeName;
}

Student::~Student(){}


Degree Student::getDegreeProgram() {
	return Degree();
}
