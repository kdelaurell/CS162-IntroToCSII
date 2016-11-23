CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pendantic-errors
CXXFLAGS += -g
LDFLAGS = -lboost_date_time
PROG1 = main
PROG2 = function
PROGS = ${PROG1} ${PROG2}
SRC1 = main.cpp
SRC2 = function.cpp
SRCS = ${SRC1} ${SRC2}
HEADERS = function.hpp
main:
	${CXX} ${SRCS} ${HEADERS} -o main
clean:
	rm -f ${PROGS} *.o *~
