PACKAGE    = sudoku
BUILDFLAGS = -g
CXX        = g++
CXXFLAGS = -I. -I./src/ -I./include/
SRCS = 	./src/cell.cpp \
 main.cpp

OBJS=$(subst .cpp,.o,$(SRCS))

$(PACKAGE) : $(OBJS)
	$(CXX) $(BUILDFLAGS) $(CXXFLAGS) -o $(PACKAGE)  $(OBJS) 

depend:.depend

.depend:$(SRCS)
	rm -f ./.depend
	#$(CXX) $(BUILDFLAGS) $(CXXFLAGS) -MM $^>>./.depend
	$(CXX) -MM $^>>./.depend

.PHONY: clean 

clean: 
	rm -f $(PACKAGE)
	rm -rf ./src/*.o
	rm -rf *.o

include .depend
