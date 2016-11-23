CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -g
LDFLAGS = -lboost_date_time
PROGS = main

SRCS = main.cpp
SRCS += searchSortFunctions.cpp

HEADERS = mainFunctions.hpp
HEADERS += searchSortFunctions.hpp

default:
	${CXX} ${CXXFLAGS} ${SRCS} ${HEADERS} -o ${PROGS}
clean:
	rm -f ${PROGS} *.o *~
