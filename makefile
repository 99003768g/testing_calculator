# Name of the project
PROJECT_NAME = Calculator

# Output directory
BUILD = build

# All source code files
SRC = project_main.c\
src/area.c\
src/factorial.c\
src/calculator_operation.c\
src/temperature_conversion.c\
src/profit_loss.c\
src/Dec_to_bin.c\
src/SI.c\
src/sqrt.c\
src/volume.c


# All test source files
TEST_SRC = src/temperature_conversion.c\
src/calculator_operation.c\
src/factorial.c\
src/area.c\
src/profit_loss.c\
src/Dec_to_bin.c\
src/SI.c\
src/sqrt.c\
src/volume.c\
test/test_file.c\
unity/unity.c

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc\
-Iunity

#Library Inlcudes
#if working with CUnit 
#INCLUDE_LIBS = -lcunit
INCLUDE_LIBS =

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

# Document the code using Doxygen
#doc:
#	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

analysis:
	cppcheck $(SRC)

memcheck: $(PROJECT_NAME).out
	valgrind ./$(PROJECT_NAME).out

coverage:${PROJECT_NAME}.out
	gcc -fprofile-arcs -ftest-coverage $(SRC) -I $(INC) -o $(PROJECT_NAME).out
	./${PROJECT_NAME}.out
	gcov -a $(SRC)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
