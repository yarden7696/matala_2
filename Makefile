CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=myBank.o
FLAGS= -Wall -g

all:  myBankd main

main: $(OBJECTS_MAIN)  
	$(CC) $(FLAGS) -o main $(OBJECTS_MAIN) ./libmyBank.so

myBankd: libmyBank.so

libmyBank.so: $(OBJECTS_LIB) myBank.h
	$(CC) -shared -o libmyBank.so $(OBJECTS_LIB)	
myBank.o: myBank.c myBank.h
	$(CC) $(FLAG) -c myBank.c 
main.o: main.c myBank.h
	$(CC) $(FLAG) -c main.c

.PHONY: clean all myBankd main

clean:
	rm -f *.o *.so main
