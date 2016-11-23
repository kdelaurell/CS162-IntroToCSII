CXX = g++
CXXFLAGS = -std=c++0x
LDFLAGS = -lboost_date_time

OBJS = mainGame.o dieClass.o loadedDieClass.o gameClass.o

SRCS = mainGame.cpp dieClass.cpp loadedDieClass.cpp gameClass.cpp

HEADERS = dieClass.hpp loadedDieClass.hpp gameClass.hpp

mainGame: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o mainGame

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	${RM} ${OBJS}
