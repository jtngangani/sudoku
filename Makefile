PACKAGE    = sudoku
BUILDFLAGS = -g
CXX        = g++
CXXFLAGS = -I. -I./src/ -I./include/
PACKAGE_SOURCES = 	./src/cell.cpp \
 main.cpp

OBJS=$(subst .cpp,.o,$(PACKAGE_SOURCES))

$(PACKAGE) : $(OBJS)
	$(CXX) $(BUILDFLAGS) $(CXXFLAGS) -o $(PACKAGE)  $(OBJS) 

depend:.depend

.depend:$(PACKAGE_SOURCES)
	rm -f ./.depend
	$(CXX) $(BUILDFLAGS) $(CXXFLAGS) -MM $^>>./.depend;

.PHONY: clean 

clean: 
	rm -f $(PACKAGE) \
	rm -rf ./src/*.o\
	rm -rf *.o

include .depend
