CXX = g++
CXXFLAGS = -std=c++0x
LDFLAGS = -lboost_date_time

OBJS = main.o List.o Item.o

SRCS = main.cpp List.cpp Item.cpp

HEADERS = List.hpp Item.hpp

main: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o main

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	${RM} ${OBJS}
