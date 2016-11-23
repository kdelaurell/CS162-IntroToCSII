CXX = g++
CXXFLAGS = -std=c++0x
#CXXFLAGS += -Wall
#CXXFLAGS += -pendantic-errors
#CXXFLAGS += -g
LDFLAGS = -lboost_date_time

OBJS = main.o determinant.o readMatrix.o 

SRCS = main.cpp determinant.cpp readMatrix.cpp

HEADERS = determinant.hpp readMatrix.hpp
main: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o main

S{OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	${RM} ${OBJS}
