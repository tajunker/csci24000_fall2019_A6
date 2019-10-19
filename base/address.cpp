#include "address.h"
#include <iostream>
#include <string>

Address::Address() {

}

Address::Address(std::string street_1, std::string street_2, std::string city, std::string state, std::string zipCode) {
	Address::street_1 = street_1;
	Address::street_2 = street_2;
	Address::city = city;
	Address::state = state;
	Address::zipCode = zipCode;
}

Address::~Address() {

}

//getters
std::string Address::getStreet_1() {
	return Address::street_1;
}

std::string Address::getStreet_2() {
	return Address::street_2;
}

std::string Address::getCity() {
	return Address::city;
}

std::string Address::getState() {
	return Address::state;
}


std::string Address::getZipCode() {
	return Address::zipCode;
}

std::string Address::getWholeAdressToString() {

	std::string wholeAddress = street_1 + " " + street_2 + ", " + city + ", " + state + " " + zipCode;

	return wholeAddress;
}


//setters
void Address::setStreet_1(std::string street_1) {
	Address::street_1 = street_1;
}

void Address::setStreet_2(std::string street_2) {
	Address::street_2 = street_2;
}

void Address::setCity(std::string city) {
	Address::city = city;
}

void Address::setState(std::string state) {
	Address::state = state;
}

void Address::setZipCode(std::string zipCode) {
	Address::zipCode = zipCode;
}


void Address::toStringCOut() {
	std::cout << street_1 << " " << street_2 << ", " << city << ", " << state << " " << zipCode;
}
