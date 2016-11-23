CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
##CXXFLAGS += -pendantic-errors
CXXFLAGS += -g
LDFLAGS = -lboost_date_time

SRCS = QueueClass.cpp
SRCS += StackClass.cpp
SRCS += main.cpp
SRCS += mainFunctions.cpp

HEADERS = QueueClass.hpp
HEADERS += mainFunctions.hpp
HEADERS += StackClass.hpp

PROGS = main

default:
	${CXX} ${CXXFLAGS} ${SRCS} ${HEADERS} -o main
clean:
	rm -f ${PROGS} *.o *~
