.PHONY: all install dvi dist tests gcov_report open rebuild clean
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

tests:
ifeq ($(OS), Darwin)
		gcc $(flags) $(LFLAGS) s21_test.c support_func.c parser.c OPN.c -o test.out $(LIBS)
		./test.out
else
		gcc $(flags) $(LFLAGS) s21_test.c support_func.c parser.c OPN.c -o test.out $(LIBS) $(LINUX)
		./test.out
endif

gcov_report: tests
	lcov -t "tests" -o test.info -c -d .
	genhtml -o report test.info

check:
	cppcheck --enable=all --suppress=missingIncludeSystem *.c *.h
	python3 ../materials/linters/cpplint.py --extensions=c *.c *.h
	make tests

ifeq ($(OS), Darwin)
	CK_FORK=no leaks --atExit -- ./test.out
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

clean:
	rm -rf *.gc* *.o *.a *.out *.info test.out
	rm -rf report

rebuild: clean all