#pragma once

#include <string>
#include "securityStudent.h"
#include "networkStudent.h"
#include "softwareStudent.h"

class Roster {
	// Student *classRosterArray[];

	public:
	
		void add(std::string studentId, std::string fName, std::string lName, std::string email, int studentAge, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree);
		void remove(std::string studentId);
		void printAll();
		void printDaysInCourse(std::string studentId);
		void printInvalidEmails();
		void printByDegreeProgram(int degreeProgram);
		~Roster();
};