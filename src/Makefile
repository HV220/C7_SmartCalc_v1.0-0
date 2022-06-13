.PHONY: all install dvi dist tests gcov_report open rebuild clean
g = gcc
flags = -Wall -Wextra -Werror -std=c11
LINUX = -lrt -lpthread -lm -lsubunit
LIBS = -lcheck
LFLAGS = -fprofile-arcs -ftest-coverage
OS = $(shell uname -s)


all: clean s21_smart_calc.a check gcov_report 

s21_smart_calc.a: s21_smart_calc
	ar rcs s21_smart_calc.a s21_smart_calc.o
	ranlib s21_smart_calc.a

s21_smart_calc: s21_smart_calc.c
	$(g) $(flags) s21_smart_calc.c -o s21_smart_calc.o

install:

uninstall:

dvi:

dist:

tests: s21_smart_calc.a
ifeq ($(OS), Darwin)
		$(g) $(flags) $(LFLAGS) s21_test.c s21_smart_calc.a -o test.out $(LIBS)
		./test.out
else
		$(g) $(flags) $(LFLAGS) s21_test.c s21_smart_calc.a -o test.out $(LIBS) $(LINUX)
		./test.out
endif

gcov_report: tests
	lcov -t "tests" -o test.info -c -d .
	genhtml -o report test.info

check:
	cppcheck --enable=all --suppress=missingIncludeSystem *.c *.h
	python3 ../materials/linters/cpplint.py --extensions=c *.c *.h
	make test
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