CC = g++  # use g++ compiler
CFLAGS = -c -Wall  # set compiler flags for object file creation 
                   # -E for debugging preprocessor 
LFLAGS =  # set linker flags for executable creation
OBJS = main.o A.o B.o  # list of object files to link
TARGET = app  # name of the final executable

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(TARGET)

A.o: A.cpp A.h B.h
	$(CC) $(CFLAGS) A.cpp

B.o: B.cpp B.h A.h
	$(CC) $(CFLAGS) B.cpp

main.o: main.cpp A.h B.h
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -f $(OBJS) $(TARGET)