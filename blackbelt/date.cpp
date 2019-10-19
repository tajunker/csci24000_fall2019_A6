#include "date.h"
#include <string>
#include <iostream>

Date::Date() {
	
}

Date::Date(std::string month, std::string day, std::string year) {
	Date::month = month;
	Date::day = day;
	Date::year = year;
}

Date::~Date() {

}


//getters
std::string Date::getMonth() {
	return Date::month;
}

std::string Date::getDay() {
	return Date::day;
}

std::string Date::getYear() {
	return Date::year;
}

/*std::string getWholeDateToString() {

	std::string wholeDate = month + "/" + day + "/" + year;

	return wholeDate;

}*/


//setters
void Date::setMonth(std::string month){
	Date::month = month;
}

void Date::setDay(std::string day) {
	Date::day = day;
}

void Date::setYear(std::string year) {
	Date::year = year;
}

/*void Date::toStringCOut() {
	std::cout = month << "/" << day << "/" << year;
}*/
