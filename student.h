#pragma once
#pragma once

#include <string>
//#include "degree.h"

class Student {

private:

	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	int			age;
	int			daysInCourse[3];

public:

	// setters
	void setStudentID(std::string id);
	void setFirstName(std::string fn);
	void setLastName(std::string ln);
	void setAge(int age);
	void setEmail(std::string email);
	void setDaysInCourse(int * days);
	//void setDegree();

	// getters
	std::string getStudentId() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	int			getAge() const;
	int 		getDaysInCourse();
	std::string getEmail() const;


	//virtual void print();
	//virtual Degree getDegree();
	//Student();
};