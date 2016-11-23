CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
##CXXFLAGS += -pendantic-errors
CXXFLAGS += -g
LDFLAGS = -lboost_date_time
PROG1 = main
PROG2 = Creature
PROG3 = Medusa
PROG4 = Barbarian
PROG5 = Vampire
PROG6 = BlueMen
PROGS = ${PROG1} ${PROG2} ${PROG3} ${PROG4} ${PROG5} ${PROG6}
SRC1 = main.cpp
SRC2 = Creature.cpp
SRC3 = Medusa.cpp
SRC4 = Barbarian.cpp
SRC5 = Vampire.cpp
SRC6 = BlueMen.cpp
SRC7 = HarryPotter.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3} ${SRC4} ${SRC5} ${SRC6} ${SRC7}
HEADER1 = Creature.hpp
HEADER2 = Medusa.hpp
HEADER3 = Barbarian.hpp
HEADER4 = Vampire.hpp
HEADER5 = BlueMen.hpp
HEADER6 = HarryPotter.hpp
HEADERS = ${HEADER1} ${HEADER2} ${HEADER3} ${HEADER4} ${HEADER5} ${HEADER6}
default:
	${CXX} ${CXXFLAGS} ${SRCS} ${HEADERS} -o ${PROG1}
clean:
	rm -f ${PROGS} *.o *~
