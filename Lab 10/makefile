CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
##CXXFLAGS += -pendantic-errors
##CXXFLAGS += -O2
CXXFLAGS += -g
##CXXFLAGS += -lrt
LDFLAGS = -lboost_date_time

##SRCS = FibonacciR.cpp
##SRCS += Fibonacci.cpp
SRCS += program.cpp

HEADERS = Fibonacci.hpp
HEADERS += mainFunctions.hpp
HEADERS += tailR.hpp

PROGS = main

default:
	${CXX} ${CXXFLAGS} ${SRCS} ${HEADERS} -o program
clean:
	rm -f ${PROGS} *.o *~
