CXXFLAGS = -Wall -g -std=c++11

all: test json-writer-test

clean:
	rm -rf *.o test json-writer

test: json-writer.h json-writer.cpp test.cpp
	$(CXX) $(CXXFLAGS) json-writer.h json-writer.cpp test.cpp -o test
json-writer-test:json-writer.h json-writer.cpp json-writer-test.cpp
	$(CXX) $(CXXFLAGS) json-writer.h json-writer.cpp json-writer-test.cpp -o json-writer-test