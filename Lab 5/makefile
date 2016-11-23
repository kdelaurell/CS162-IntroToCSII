CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
##CXXFLAGS += -pendantic-errors
CXXFLAGS += -g
LDFLAGS = -lboost_date_time
PROG1 = main
PROG2 = mainFunctions
PROG3 = Ant
PROG4 = Doodlebug
PROG5 = Critters
PROGS = ${PROG1} ${PROG2} ${PROG3} ${PROG4} ${PROG5}
SRC1 = main.cpp
SRC2 = mainFunctions.cpp
SRC3 = Ant.cpp
SRC4 = Doodlebug.cpp
SRC5 = Critters.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3} ${SRC4} ${SRC5}
HEADER1 = Ant.hpp
HEADER2 = Doodlebug.hpp
HEADER3 = mainFunctions.hpp
HEADER4 = Critters.hpp
HEADERS = ${HEADER1} ${HEADER2} ${HEADER3} ${HEADER4}
default:
	${CXX} ${CXXFLAGS} ${SRCS} ${HEADERS} -o ${PROG1}
clean:
	rm -f ${PROGS} *.o *~
