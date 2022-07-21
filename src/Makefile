.PHONY: all install dvi dist tests gcov_report open rebuild clean path
flags = -Wall -Wextra -Werror -std=c11
LINUX = -lrt -lpthread -lm -lsubunit
LIBS = -lm -lcheck
LFLAGS = -fprofile-arcs -ftest-coverage
OS = $(shell uname -s)

all: clean check gcov_report 

install:
ifeq ($(OS), Darwin)
		
else
	sudo apt-get install build-essential libgl1-mesa-dev
endif

uninstall:
ifeq ($(OS), Darwin)
		
else
	sudo apt autoremove
endif

dvi:

dist:

tests: path
ifeq ($(OS), Darwin)
		gcc $(flags) $(LFLAGS) backend/s21_test.c backend/support_func.c backend/parcer.c backend/OPN.c -o backend/test.out $(LIBS)
		./backend/test.out
else
		gcc $(flags) $(LFLAGS) backend/s21_test.c backend/support_func.c backend/parcer.c backend/OPN.c -o backend/test.out $(LIBS) $(LINUX)
		./backend/test.out
endif

gcov_report: path  tests
	lcov -t "tests" -o test.info -c -d .
	genhtml -o report test.info

check:
	cppcheck --enable=all --suppress=missingIncludeSystem backend/*.c backend/*.h
	python3 ../materials/linters/cpplint.py --extensions=c backend/*.c backend/*.h
	make tests

ifeq ($(OS), Darwin)
	CK_FORK=no leaks --atExit -- ./backend/test.out
else
	valgrind ./test.out --leak-check=full
endif
	make clean

open: 
ifeq ($(OS), Darwin)
		open report/index.html
else
		xdg-open report/index.html
endif

path:
	cd backend/

clean:
	rm -rf  *.gc* *.o *.a *.out *.info test.out
	rm -rf report

rebuild: clean all
