#include <stdio.h>
#include "../include/math_utils/math_utils.h"

int main() {
    printf("=== Math Utilities Library Demo ===\n\n");
    
    // Test factorial
    int n = 5;
    printf("Factorial of %d: %lld\n\n", n, factorial(n));
    
    // Test is_prime
    int num = 17;
    printf("Is %d prime? %s\n", num, is_prime(num) ? "Yes" : "No");
    num = 18;
    printf("Is %d prime? %s\n\n", num, is_prime(num) ? "Yes" : "No");
    
    // Test gcd
    int a = 48, b = 18;
    printf("GCD of %d and %d: %d\n\n", a, b, gcd(a, b));
    
    // Test lcm
    a = 12;
    b = 18;
    printf("LCM of %d and %d: %d\n\n", a, b, lcm(a, b));
    
    // Test power
    double base = 2.0;
    int exponent = 10;
    printf("%.1f raised to the power of %d: %.0f\n", base, exponent, power(base, exponent));
    
    return 0;
}
