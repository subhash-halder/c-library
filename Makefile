# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./include -g
LDFLAGS = 

# Directories
SRC_DIR = src
INCLUDE_DIR = include
EXAMPLES_DIR = examples
TESTS_DIR = tests
BUILD_DIR = build
LIB_DIR = lib

# Source files
STRING_UTILS_SRC = $(SRC_DIR)/string_utils/string_utils.c
MATH_UTILS_SRC = $(SRC_DIR)/math_utils/math_utils.c

# Object files
STRING_UTILS_OBJ = $(BUILD_DIR)/string_utils.o
MATH_UTILS_OBJ = $(BUILD_DIR)/math_utils.o

# Static libraries
STRING_UTILS_LIB = $(LIB_DIR)/libstring_utils.a
MATH_UTILS_LIB = $(LIB_DIR)/libmath_utils.a

# Examples
STRING_EXAMPLE = $(BUILD_DIR)/string_utils_example
MATH_EXAMPLE = $(BUILD_DIR)/math_utils_example

# Tests
STRING_TEST = $(BUILD_DIR)/test_string_utils
MATH_TEST = $(BUILD_DIR)/test_math_utils

# Default target
.PHONY: all
all: libs examples tests

# Create directories
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(LIB_DIR):
	mkdir -p $(LIB_DIR)

# Build object files
$(STRING_UTILS_OBJ): $(STRING_UTILS_SRC) | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(MATH_UTILS_OBJ): $(MATH_UTILS_SRC) | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Build static libraries
$(STRING_UTILS_LIB): $(STRING_UTILS_OBJ) | $(LIB_DIR)
	ar rcs $@ $<

$(MATH_UTILS_LIB): $(MATH_UTILS_OBJ) | $(LIB_DIR)
	ar rcs $@ $<

# Build libraries target
.PHONY: libs
libs: $(STRING_UTILS_LIB) $(MATH_UTILS_LIB)

# Build examples
$(STRING_EXAMPLE): $(EXAMPLES_DIR)/string_utils_example.c $(STRING_UTILS_LIB) | $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -L$(LIB_DIR) -lstring_utils -o $@

$(MATH_EXAMPLE): $(EXAMPLES_DIR)/math_utils_example.c $(MATH_UTILS_LIB) | $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -L$(LIB_DIR) -lmath_utils -o $@

.PHONY: examples
examples: $(STRING_EXAMPLE) $(MATH_EXAMPLE)

# Build tests
$(STRING_TEST): $(TESTS_DIR)/test_string_utils.c $(STRING_UTILS_LIB) | $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -L$(LIB_DIR) -lstring_utils -o $@

$(MATH_TEST): $(TESTS_DIR)/test_math_utils.c $(MATH_UTILS_LIB) | $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -L$(LIB_DIR) -lmath_utils -o $@

.PHONY: tests
tests: $(STRING_TEST) $(MATH_TEST)

# Run tests
.PHONY: test
test: tests
	@echo "Running String Utils Tests..."
	@$(STRING_TEST)
	@echo ""
	@echo "Running Math Utils Tests..."
	@$(MATH_TEST)

# Run examples
.PHONY: run-examples
run-examples: examples
	@echo "Running String Utils Example..."
	@$(STRING_EXAMPLE)
	@echo ""
	@echo "Running Math Utils Example..."
	@$(MATH_EXAMPLE)

# Clean build artifacts
.PHONY: clean
clean:
	rm -rf $(BUILD_DIR) $(LIB_DIR)

# Help target
.PHONY: help
help:
	@echo "C Library Project - Makefile Targets:"
	@echo "  all          - Build libraries, examples, and tests (default)"
	@echo "  libs         - Build only the libraries"
	@echo "  examples     - Build example programs"
	@echo "  tests        - Build test programs"
	@echo "  test         - Build and run all tests"
	@echo "  run-examples - Build and run example programs"
	@echo "  clean        - Remove all build artifacts"
	@echo "  help         - Show this help message"
