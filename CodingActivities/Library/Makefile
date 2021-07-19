PROJ_NAME = library
TEST_PROJ_NAME = Test_$(PROJ_NAME)
TEST_OUTPUT = Test_$(PROJ_NAME)
PROJECT_OUTPUT = $(PROJ_NAME)

CC = g++

SRC = library.cpp test_library.cpp library.h book.h book.cpp

LIB = -lgtest -lgtest_main -lpthread

COV_SRC = test_library.cpp

ifdef OS
   RM = rm 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
.PHONY: run clean test doc all



all:
	$(CC) $(SRC) $(LIB) -o $(call FixPath,$(PROJECT_OUTPUT).$(EXEC))
	./$(call FixPath,$(PROJECT_OUTPUT).$(EXEC))

run:
	./$(call FixPath,$(PROJECT_OUTPUT).$(EXEC))

coverage:
	#cp test_vector.cpp .
	$(CC) -fprofile-arcs -ftest-coverage $(SRC) $(LIB) -o $(call FixPath, $(TEST_OUTPUT).$(EXEC))
	$(call FixPath, ./$(TEST_OUTPUT).$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov 
	$(RM) *.h.gcov 
	$(RM) *.tcc.gcov 
	$(RM) *.cpp.gcov
	$(RM) *.gcov
	$(RM) *.$(EXEC) 

cppcheck:
	cppcheck --enable=all $(SRC)

valgrind:
	$(CC) -fprofile-arcs -ftest-coverage $(SRC) $(LIB) -o $(call FixPath, $(TEST_OUTPUT).$(EXEC))
	valgrind ./$(TEST_OUTPUT).$(EXEC)
	$(RM) *.gcda
	$(RM) *.tcc.gcov
	$(RM) *.gcda
	$(RM) *.gcno 
	$(RM) *.$(EXEC) 

clean:
	$(RM) *.$(EXEC) 
		
