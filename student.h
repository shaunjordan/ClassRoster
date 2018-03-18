#pragma once

#include <string>
#include "degree.h"

class Student {

private:

	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	int			age;
	int			daysInCourse[3];
	Degree		degreeName;

public:

	// setters
	void setStudentID(std::string id);
	void setFirstName(std::string fn);
	void setLastName(std::string ln);
	void setAge(int age);
	void setEmail(std::string email);
	void setDaysInCourse(int * days);
	//void setDegree(); //FIXME: define

	// getters
	std::string getStudentId() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getEmail() const;
	int			getAge() const;
	int 		getDaysInCourse() const;
	Degree		getDegreeName() const;
	

	Student(std::string studentID, std::string firstName, std::string lastName, std::string email, int age, int * days, Degree degreeName);
	virtual void print();
	~Student();
	virtual Degree getDegreeProgram(); //FIXME: define
};