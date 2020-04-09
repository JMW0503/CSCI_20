TimeProgram: main.o Time.o
	g++ main.o Time.o -o TimeProgram

main.o: main.cpp
	g++ -c main.cpp

Time.o: Time.cpp Time.h
	g++ -c Time.cpp

clean:
	del *.o TimeProgram.exe