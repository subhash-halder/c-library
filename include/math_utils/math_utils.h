#ifndef MATH_UTILS_H
#define MATH_UTILS_H

/**
 * Math utility library
 * Provides common mathematical functions
 */

/**
 * Calculate factorial of a number
 * @param n The number
 * @return Factorial of n
 */
long long factorial(int n);

/**
 * Check if a number is prime
 * @param n The number to check
 * @return 1 if prime, 0 otherwise
 */
int is_prime(int n);

/**
 * Calculate greatest common divisor
 * @param a First number
 * @param b Second number
 * @return GCD of a and b
 */
int gcd(int a, int b);

/**
 * Calculate least common multiple
 * @param a First number
 * @param b Second number
 * @return LCM of a and b
 */
int lcm(int a, int b);

/**
 * Calculate power (base^exponent)
 * @param base The base
 * @param exponent The exponent
 * @return base raised to the power of exponent
 */
double power(double base, int exponent);

#endif /* MATH_UTILS_H */
