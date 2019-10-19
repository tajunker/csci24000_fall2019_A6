StudentParserBlackBelt: date.o address.o student.o main.o
	g++ date.o address.o student.o main.o -o StudentParserBlackBelt

main.o: main.cpp
	g++ main.cpp -c

date.o: date.cpp
	g++ date.cpp -c

address.o: address.cpp
	g++ address.cpp -c

student.o: student.cpp
	g++ student.cpp -c

clean:
	rm *.o

run: StudentParserBlackBelt
	./StudentParserBlackBelt
