CC = g++
FLAGS =  -g -Wall -I./include

objects = main

all:$(objects)

$(objects): %: %.cpp
	$(CC) $(FLAGS) -o $@ $< 


clean:
	rm -rf *.dSYM
	rm -f `find . -maxdepth 1 -type f | egrep -v "makefile|\.cpp|\.sh|\.hpp|\.h|include|database|git" | xargs`