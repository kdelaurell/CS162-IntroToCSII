CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
##CXXFLAGS += -pendantic-errors
CXXFLAGS += -g
LDFLAGS = -lboost_date_time

SRCS = Queue.cpp
SRCS += main.cpp

HEADERS = Queue.hpp
HEADERS += QueueNode.hpp

PROGS = main

default:
	${CXX} ${CXXFLAGS} ${SRCS} ${HEADERS} -o ${PROGS}
clean:
	rm -f ${PROGS} *.o *~
