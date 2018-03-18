#pragma once

#include "student.h"

class SoftwareStudent : public Student {
	
	private:

		Degree degreeType = SOFTWARE;

	public:

		virtual Degree getDegreeProgam();

};