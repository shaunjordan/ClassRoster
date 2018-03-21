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
	void setAge(int studentAge);
	void setEmail(std::string email);
	void setDaysInCourse(int * days);
	void setDegree(Degree degree);

	// getters
	std::string getStudentID() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getEmail() const;
	int			getAge() const;
	int* 		getDaysInCourse();
	Degree		getDegreeName() const;
	

	Student(std::string id, std::string fn, std::string ln, std::string email, int studentAge, int * days, Degree degree);
	virtual void print();
	~Student();
	virtual Degree getDegreeProgram();
};