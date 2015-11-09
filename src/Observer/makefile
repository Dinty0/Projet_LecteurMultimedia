CC=g++
CFLAGS=-c -Wall -Wextra -std=c++11
LDFLAGS=
SOURCES=main.cpp FichierSousTitre.cpp SousTitres.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=test
all: $(SOURCES) $(EXECUTABLE)
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
clean:
	rm *.o 
