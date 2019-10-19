#include "student.h"
#include "address.h"
#include "date.h"
#include <string>
#include <sstream>



Student::Student() {
	Student::dateOfBirth = new Date();
	Student::graduationDate = new Date();
	Student::address = new Address();
}

Student::Student(std::string firstName, std::string lastName, std::string gpa, std::string creditHours, Date* dateOfBirth, Date* graduationDate, Address* address) {
	Student::firstName = firstName;
	Student::lastName = lastName;
	Student::gpa = gpa;
	Student::creditHours = creditHours;
	Student::dateOfBirth = dateOfBirth;
	Student::graduationDate = graduationDate;
	Student::address = address;
}

Student::~Student() {

	delete address;
	delete dateOfBirth;
	delete graduationDate;

}


//getters
std::string Student::getFirstName() {

	return Student::firstName;

}

std::string Student::getLastName() {

	return Student::lastName;
	
}

std::string Student::getGPA() {

	return Student::gpa;

}

std::string Student::getCreditHours() {

	return Student::creditHours;

}

Date Student::getDateOfBirth() {

	return *Student::dateOfBirth;

}

Date Student::getGraduationDate() {

	return *Student::graduationDate;

}

Address Student::getAddress() {

	return *Student::address;

}

std::string Student::getStudentInfo() {

	std::string firstName;
	std::string lastName;
	std::string address;
	std::string street_1;
	std::string street_2;
	std::string city;
	std::string state;
	std::string zipCode;
	std::string dateOfBirth;
	std::string dateOfBirthDay;
	std::string dateOfBirthMonth;
	std::string dateOfBirthYear;
	std::string graduationDate;
	std::string graduationDay;
	std::string graduationMonth;
	std::string graduationYear;
	std::string gpa;
	std::string creditHours;


	firstName = Student::getFirstName();
	lastName = Student::getLastName();
	street_1 = Student::getAddress().getStreet_1();
	street_2 = Student::getAddress().getStreet_2();
	city = Student::getAddress().getCity();
	state = Student::getAddress().getState();
	zipCode = Student::getAddress().getZipCode();
	dateOfBirthMonth = Student::getDateOfBirth().getMonth();
	dateOfBirthDay = Student::getDateOfBirth().getDay();
	dateOfBirthYear = Student::getDateOfBirth().getYear();
	graduationMonth = Student::getGraduationDate().getMonth();
	graduationDay = Student::getGraduationDate().getDay();
	graduationYear = Student::getGraduationDate().getYear();
	gpa = Student::getGPA();
	creditHours = Student::getCreditHours();

	dateOfBirth = dateOfBirthMonth + "/" + dateOfBirthDay + "/" + dateOfBirthYear;
	graduationDate = graduationMonth + "/" + graduationDay + "/" + graduationYear;
	address = street_1 + ", " + street_2 + ", " + city + ", " + state + ", " + zipCode;

	return lastName + ", " + firstName + ", " + address + ", " + dateOfBirth + ", " + graduationDate + ", " + gpa + ", " + creditHours;

	
}



//setters
void Student::setFirstName(std::string firstName) {

	Student::firstName = firstName;

}

void Student::setLastName(std::string lastName) {

	Student::lastName = lastName;

}

void Student::setGPA(std::string gpa) {
	
	Student::gpa = gpa;

}

void Student::setCreditHours(std::string creditHours) {

	Student::creditHours = creditHours;

}

void Student::setAddress(Address* address) {

	Student::address = address;

}

void Student::setDateOfBirth(Date* dateOfBirth) {

	Student::dateOfBirth = dateOfBirth;

}

void Student::setGraduationDate(Date* graduationDate) {

	Student::graduationDate = graduationDate;

}

void Student::setStudentInfo(std::string currentLine) {

	std::stringstream ss(currentLine);

	std::string firstName;
	std::string lastName;
	std::string street_1;
	std::string street_2;
	std::string city;
	std::string state;
	std::string zipCode;
	std::string dateOfBirthDay;
	std::string dateOfBirthMonth;
	std::string dateOfBirthYear;
	std::string graduationDay;
	std::string graduationMonth;
	std::string graduationYear;
	std::string gpa;
	std::string creditHours;

	Student::address = new Address();
	Student::dateOfBirth = new Date();
	Student::graduationDate = new Date();


	getline(ss, lastName, ',');
	getline(ss, firstName, ',');
	
	
	getline(ss, street_1, ',');
	getline(ss, street_2, ',');
	getline(ss, city, ',');
	getline(ss, state, ',');
	getline(ss, zipCode, ',');
	
	getline(ss, dateOfBirthMonth, '/');
	getline(ss, dateOfBirthDay, '/');
	getline(ss, dateOfBirthYear, ',');
	
	getline(ss, graduationMonth, '/');
	getline(ss, graduationDay, '/');
	getline(ss, graduationYear, ',');
	
	getline(ss, gpa, ',');
	
	getline(ss, creditHours);



	Student::setFirstName(firstName);
	Student::setLastName(lastName);
	
	Student::address -> setStreet_1(street_1);
	Student::address -> setStreet_2(street_2);
	Student::address -> setCity(city);
	Student::address -> setState(state);
	Student::address -> setZipCode(zipCode);
	
	Student::dateOfBirth -> setMonth(dateOfBirthMonth);
	Student::dateOfBirth -> setDay(dateOfBirthDay);
	Student::dateOfBirth -> setYear(dateOfBirthYear);
	
	Student::graduationDate -> setMonth(graduationMonth);
	Student::graduationDate -> setDay(graduationDay);
	Student::graduationDate -> setYear(graduationYear);
	
	Student::setGPA(gpa);
	
	Student::setCreditHours(creditHours);


}










