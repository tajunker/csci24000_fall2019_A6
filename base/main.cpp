#include <sstream>
#include <fstream>
#include <iostream>
#include <string>

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

			arrayOfStudents[i].setStudentInfo(currentLine);

		}

		for (int j = 0; j < MAX; ++j) {

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
