CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
##CXXFLAGS += -pendantic-errors
CXXFLAGS += -g
LDFLAGS = -lboost_date_time
PROG1 = main
PROGS = ${PROG1}
SRC1 = main.cpp
SRC2 = DynamicStack.cpp
SRC3 = DynamicQueue.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3}
HEADER1 = DynamicStack.hpp
HEADER2 = Node.hpp
HEADER3 = DynamicQueue.hpp
HEADER4 = QueueNode.hpp
HEADERS = ${HEADER1} ${HEADER2} ${HEADER3} ${HEADER4}
default:
	${CXX} ${CXXFLAGS} ${SRCS} ${HEADERS} -o ${PROG1}
clean:
	rm -f ${PROGS} *.o *~
