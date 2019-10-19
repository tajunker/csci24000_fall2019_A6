#ifndef DATE_H
#define DATE_H

#include <string>

class Date {

	public:
		Date();
		Date(std::string, std::string, std::string);
		~Date();

		//getters
		std::string getMonth();
		std::string getDay();
		std::string getYear();
		std::string getWholeDateToString();

		//setters
		void setMonth(std::string);
		void setDay(std::string);
		void setYear(std::string);
		


		void toStringCOut();


		

	private:
		std::string month;
		std::string day;
		std::string year;



};

#endif 
