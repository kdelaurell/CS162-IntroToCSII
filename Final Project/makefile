CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
##CXXFLAGS += -pendantic-errors
CXXFLAGS += -g
LDFLAGS = -lboost_date_time

SRCS = main.cpp
SRCS += LockerRoom.cpp
SRCS += Lobby.cpp
SRCS += FrontDoor.cpp
SRCS += Spaces.cpp
SRCS += PlayerClass.cpp
SRCS += Closet.cpp
SRCS += Bathroom.cpp
SRCS += PenaltyBox.cpp
SRCS += Bench.cpp
SRCS += IceRink.cpp
SRCS += Stands.cpp
SRCS += PressBox.cpp
SRCS += ArenaArea.cpp
SRCS += hockeyRinkFunctions.cpp

HEADERS = Spaces.hpp
HEADERS += LockerRoom.hpp
HEADERS += FrontDoor.hpp
HEADERS += Lobby.hpp
HEADERS += PlayerClass.hpp
HEADERS += Closet.hpp
HEADERS += Bathroom.hpp
HEADERS += PenaltyBox.hpp
HEADERS += Bench.hpp
HEADERS += IceRink.hpp
HEADERS += Stands.hpp
HEADERS += PressBox.hpp
HEADERS += ArenaArea.hpp
HEADERS += hockeyRinkFunctions.hpp

PROG1 = main
PROG2 = Spaces
PROG3 = LockerRoom
PROGS = ${PROG1} ${PROG2} ${PROG3}

default:
	${CXX} ${CXXFLAGS} ${SRCS} ${HEADERS} -o ${PROG1}
clean:
	rm -f ${PROGS} *.o *~
