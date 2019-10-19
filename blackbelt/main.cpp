#include <sstream>
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>

//function prototypes
bool is_digit(const char value) { return std::isdigit(value); }
bool is_numeric(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

#include "student.h"

#define MAX 51

void sortStudents(std::string arrayOfStudentsSort[]);
void swapStudents(std::string* a, std::string* b);

int main () {


	std::ifstream inputFile;
	std::ofstream outputFileShortReport;
	std::ofstream outputFileAlphaReport;
	std::ofstream outputFileFullReport;

	inputFile.open("student.dat");
	outputFileShortReport.open("shortReport.txt");
	outputFileAlphaReport.open("alphaReport.txt");
	outputFileFullReport.open("fullReport.txt");

	if(!inputFile){

		std::cerr << "unable to open student.dat";

	} else {

		std::string currentLine;

		Student* arrayOfStudents = new Student[MAX];

		for (int i = 0; i < MAX; ++i) {
			
			getline(inputFile, currentLine);

			// Check to see if integer line is empty
		    if (currentLine.length() == 0) {
		    

		    	// Output the following error message to the console
		        std::cerr << "Found an empty line, please check input file and try again... \n\n";
		        return 1;
		    

		    }

			arrayOfStudents[i].setStudentInfo(currentLine);

		}

		for (int j = 0; j < MAX; ++j) {

			std::string lastNameJ = arrayOfStudents[j].getLastName();
			std::string firstNameJ = arrayOfStudents[j].getFirstName();

			// Check to see if the numbers in the input file are valid.
			if (is_numeric(lastNameJ) || is_numeric(firstNameJ)) {


				// Output the following error message to the console.
			    std::cerr << "Non valid names, please check input file and try again... \n";
			    return 1;


			}

			outputFileShortReport << arrayOfStudents[j].getLastName() << ", " << arrayOfStudents[j].getFirstName() << std::endl << std::endl;

			

		}

		std::string arrayOfStudentsSort[MAX];
		for (int z = 0; z < MAX; ++z) {
			
			arrayOfStudentsSort[z] = arrayOfStudents[z].getLastName() + ", " + arrayOfStudents[z].getFirstName();

		}

		sortStudents(arrayOfStudentsSort);

		for (int y = 0; y < MAX; ++y){
			
			outputFileAlphaReport << arrayOfStudentsSort[y] << std::endl << std::endl;
		
		}


		for (int x = 0; x < MAX; ++x) {

			std::string lastNameX = arrayOfStudents[x].getLastName();
			std::string firstNameX = arrayOfStudents[x].getFirstName();

			// Check to see if the numbers in the input file are valid.
			if (is_numeric(lastNameX) || is_numeric(firstNameX)) {


				// Output the following error message to the console.
			    std::cerr << "Non valid names, please check input file and try again... \n";
			    return 1;


			}
			
			outputFileFullReport << arrayOfStudents[x].getStudentInfo() << std::endl << std::endl;

		}



	}




}


void sortStudents(std::string arrayOfStudentsSort[]) {

	int i;
	int j;

	for (i = 0; i < MAX; i++) {
		for (j = 0; j < (MAX - i - 1); j++) {
			if (arrayOfStudentsSort[j] > arrayOfStudentsSort[j+1]) {
				swapStudents(&arrayOfStudentsSort[j], &arrayOfStudentsSort[j+1]);
				//printf("\n");
				//printValues();
				
			}
		}
	}

}

void swapStudents(std::string* a, std::string* b) {
	
	std::string tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;

}
