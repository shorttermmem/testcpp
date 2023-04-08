CC = g++  # use g++ compiler
CFLAGS = -c -Wall  # set compiler flags for object file creation 
                   # -E for debugging preprocessor 
LFLAGS =  # set linker flags for executable creation
OBJS = main.o # list of object files to link
TARGET = app  # name of the final executable

all: $(TARGET)

$(TARGET): $(OBJS)
#	$(CC) $(LFLAGS) $(OBJS) -o $(TARGET)
	$(CC) $(LFLAGS) $<      -o $@

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -f $(OBJS) $(TARGET)
