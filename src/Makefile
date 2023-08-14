CXX = g++
CFLAG = -Wall -Wextra -Werror -g
APP = build/s21_calc.app
STD = -std=c++17
TEXI2DVI = makeinfo --html
SOURCES = ExampleModel/ExampleModelCalc.cpp \
			ExampleModel/ExampleModelCredit.cpp \
			ExampleController/ExampleControllerCalc.cpp \
			ConsoleView/ConsoleViewCalc.cpp \
			ConsoleView/ConsoleViewCredit.cpp \
			ConsoleView/ConsoleViewGrafic.cpp
ARCHIVE = *.h \
			*.html \
			*.pro \
			*.cpp

UNAME := $(shell uname)
ifeq ($(UNAME), Linux)
	GTEST:= $(shell pkg-config --cflags --libs gtest 2>/dev/null)
	ifeq ($(GTEST),)
		GTEST:=-DGTEST_HAS_PTHREAD=1 -lgtest -pthread
	endif
	LEAKS_CMD = CK_FORK=no valgrind --tool=memcheck --leak-check=full --track-origins=yes  --leak-check=full --show-leak-kinds=all ./test
endif
ifeq ($(UNAME), Darwin)
	LEAKS_CMD = CK_FORK=no leaks --atExit -- ./test
	GTEST = -fsanitize=address -DGTEST_HAS_PTHREAD=1 -lgtest -pthread
endif


all: clean install test

build:
	mkdir build
	cd ./build/ && qmake ../ && make && mv calc_v2.app s21_calc.app

install: build
	@mkdir $(HOME)/Desktop/SmartCalc_v2.0/
	@cp -rf $(APP) $(HOME)/Desktop/SmartCalc_v2.0/
	make clean

uninstall:
	rm -rf $(HOME)/Desktop/SmartCalc_v2.0/

dvi:
	open dvi.html

check:
	cp ../materials/linters/.clang-format .clang-format
	clang-format -i *.cpp $(SOURCES)
	clang-format -n *.cpp $(SOURCES)
	rm -rf .clang-format


dist:
	rm -rf Archive_SmartCalc_v2.0/
	mkdir Archive_SmartCalc_v2.0/
	mkdir Archive_SmartCalc_v2.0/src
	cp -R ConsoleView ExampleController ExampleModel Archive_SmartCalc_v2.0/src/
	cp Makefile $(ARCHIVE) Archive_SmartCalc_v2.0/src/
	tar cvzf Archive_SmartCalc_v2.0.tgz Archive_SmartCalc_v2.0/
	mv Archive_SmartCalc_v2.0.tgz $(HOME)/Desktop/
	rm -rf Archive_SmartCalc_v2.0/

test: clean
	$(CXX) ExampleModel/ExampleModelCalc.cpp test.cpp $(STD) $(GTEST) -o test
	./test

gcov_report:
	$(CXX) --coverage ExampleModel/ExampleModelCalc.cpp test.cpp $(STD) $(GTEST) -o s21_test
	./s21_test
	lcov -t "s21_test" -o s21_test.info -c -d .
	genhtml -o report s21_test.info
	open ./report/index.html

leaks: test
  CK_FORK=no leaks --atExit -- ./test
  
clean:
	rm -rf *.o *.gcda *.gcno *.info s21_test report build test

rebuild: clean all
