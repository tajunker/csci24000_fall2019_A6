#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

class Address {

	public:
		Address();
		Address(std::string, std::string, std::string, std::string, std::string);
		Address(std::string, std::string, std::string, std::string);
		~Address();

		//getters
		std::string getStreet_1();
		std::string getStreet_2();
		std::string getCity();
		std::string getState();
		std::string getZipCode();
		std::string getWholeAdressToString();

		//setters
		void setStreet_1(std::string);
		void setStreet_2(std::string);
		void setCity(std::string);
		void setState(std::string);
		void setZipCode(std::string);
		


		void toStringCOut();



	private:
		std::string street_1;
		std::string street_2;
		std::string city;
		std::string state;
		std::string zipCode;



};

#endif 
