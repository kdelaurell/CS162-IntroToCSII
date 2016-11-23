CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
##CXXFLAGS += -pendantic-errors
CXXFLAGS += -g
LDFLAGS = -lboost_date_time
PROGS = main


SRCS = main.cpp
SRCS += Creature.cpp
SRCS += Medusa.cpp
SRCS += Barbarian.cpp
SRCS += Vampire.cpp
SRCS += BlueMen.cpp
SRCS += HarryPotter.cpp
SRCS += DynamicStack.cpp
SRCS += DynamicQueue.cpp
SRCS += mainFunctions.cpp
SRCS += userClass.cpp


HEADERS = Creature.hpp
HEADERS += Medusa.hpp
HEADERS += Barbarian.hpp
HEADERS += Vampire.hpp
HEADERS += BlueMen.hpp
HEADERS += HarryPotter.hpp
HEADERS += mainFunctions.hpp
HEADERS += DynamicStack.hpp
HEADERS += DynamicQueue.hpp
HEADERS += mainFunctions.hpp
HEADERS += Node.hpp
HEADERS += QueueNode.hpp
HEADERS += userClass.hpp

default:
	${CXX} ${CXXFLAGS} ${SRCS} ${HEADERS} -o ${PROGS}
clean:
	rm -f ${PROGS} *.o *~
