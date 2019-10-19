StudentParser: date.o address.o student.o main.o
	g++ date.o address.o student.o main.o -o StudentParser

main.o: main.cpp
	g++ main.cpp -c

date.o: date.cpp
	g++ date.cpp -c

address.o: address.cpp
	g++ address.cpp -c

student.o: student.cpp
	g++ student.cpp -c

valgrind:
	valgrind ./StudentParser

clean:
	rm *.o fullReport.txt shortReport.txt alphaReport.txt StudentParser

run: StudentParser
	./StudentParser
