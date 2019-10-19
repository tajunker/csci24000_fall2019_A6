#ifndef STUDENT_H
#define STUDENT_H

#include "address.h"
#include "date.h"
#include <string>

class Student {

	public:
		Student();
		Student(std::string, std::string, std::string, std::string, Date* dateOfBirth, Date* graduationDate, Address* address);
		~Student();


		//getters
		std::string getFirstName();
		std::string getLastName();
		Address getAddress();
		Date getDateOfBirth();
		Date getGraduationDate();
		std::string getGPA();
		std::string getCreditHours();
		std::string getStudentInfo();

		//setters
		void setFirstName(std::string);
		void setLastName(std::string);
		void setAddress(Address*);
		void setDateOfBirth(Date*);
		void setGraduationDate(Date*);
		void setGPA(std::string);
		void setCreditHours(std::string);
		

		void setStudentInfo(std::string);
		std::string toString();
		std::string toShortString();

	private:
		std::string firstName;
		std::string lastName;
		std::string gpa;
		std::string creditHours;
		Date* dateOfBirth;
		Date* graduationDate;
		Address* address;

};

#endif 
