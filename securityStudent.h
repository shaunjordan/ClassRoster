#pragma once

#include "student.h"

class SecurityStudent : public Student {

	private:

		Degree degreeType = SECURITY;

	public:

		virtual Degree getDegreeProgram();
};