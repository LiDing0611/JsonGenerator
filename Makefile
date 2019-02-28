CXXFLAGS = -Wall -g -std=c++11

all: test

clean:
	rm -rf *.o test

test: json-generator.h json-generator.cpp test.cpp
	$(CXX) $(CXXFLAGS) json-generator.h json-generator.cpp test.cpp -o test
