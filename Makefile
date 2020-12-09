

SOURCES = sources/first_analysis.c

INC =-Iincludes

CFLAGS = -D ARCH=i386 -D DEBUG -D FAULTY_CODE

## the target
all: $(SOURCES)
	gcc -Wall -pedantic $(INC) $(CFLAGS) $(SOURCES)

clean: 
	del a.exe
