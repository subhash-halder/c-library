# C Library Collection

A comprehensive C library project containing various utility libraries for common programming tasks.

## Overview

This project provides a collection of well-tested, efficient C libraries that can be used in your projects. Each library is modular and can be used independently.

## Libraries Included

### 1. String Utilities (`string_utils`)
Provides common string manipulation functions:
- `str_reverse()` - Reverse a string in place
- `str_to_upper()` - Convert string to uppercase
- `str_to_lower()` - Convert string to lowercase
- `str_trim()` - Remove leading and trailing whitespace
- `str_count_char()` - Count occurrences of a character

### 2. Math Utilities (`math_utils`)
Provides common mathematical functions:
- `factorial()` - Calculate factorial of a number
- `is_prime()` - Check if a number is prime
- `gcd()` - Calculate greatest common divisor
- `lcm()` - Calculate least common multiple
- `power()` - Calculate power (base^exponent)

## Project Structure

```
c-library/
├── include/              # Header files
│   ├── string_utils/
│   │   └── string_utils.h
│   └── math_utils/
│       └── math_utils.h
├── src/                  # Source files
│   ├── string_utils/
│   │   └── string_utils.c
│   └── math_utils/
│       └── math_utils.c
├── examples/             # Example programs
│   ├── string_utils_example.c
│   └── math_utils_example.c
├── tests/                # Test programs
│   ├── test_string_utils.c
│   └── test_math_utils.c
├── Makefile              # Build system
└── README.md             # This file
```

## Building

### Prerequisites
- GCC compiler
- GNU Make

### Build Commands

```bash
# Build everything (libraries, examples, and tests)
make all

# Build only the libraries
make libs

# Build example programs
make examples

# Build test programs
make tests

# Run all tests
make test

# Run example programs
make run-examples

# Clean build artifacts
make clean

# Show help
make help
```

## Usage

### Including Libraries in Your Project

1. **Include the header file:**
```c
#include "string_utils/string_utils.h"
#include "math_utils/math_utils.h"
```

2. **Link against the library:**
```bash
gcc your_program.c -I./include -L./lib -lstring_utils -lmath_utils -o your_program
```

### Example: String Utilities

```c
#include <stdio.h>
#include "string_utils/string_utils.h"

int main() {
    char str[] = "hello world";
    str_to_upper(str);
    printf("%s\n", str);  // Output: HELLO WORLD
    return 0;
}
```

### Example: Math Utilities

```c
#include <stdio.h>
#include "math_utils/math_utils.h"

int main() {
    int n = 5;
    printf("Factorial of %d: %lld\n", n, factorial(n));  // Output: 120
    return 0;
}
```

## Testing

All libraries include comprehensive test suites. Run tests with:

```bash
make test
```

This will build and execute all test programs, verifying the correctness of each library function.

## Examples

Example programs are provided in the `examples/` directory to demonstrate library usage:

```bash
make run-examples
```

## Contributing

Contributions are welcome! Feel free to add new libraries or improve existing ones.

## License

See LICENSE file for details.