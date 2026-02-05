#include "../../include/math_utils/math_utils.h"
#include <stdlib.h>

long long factorial(int n) {
    if (n < 0) return -1;
    if (n == 0 || n == 1) return 1;
    
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int is_prime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    // Compute as abs(a / gcd(a, b) * b) to reduce overflow risk
    return abs(a / gcd(a, b) * b);
}

double power(double base, int exponent) {
    double result = 1.0;
    int abs_exp = abs(exponent);
    
    for (int i = 0; i < abs_exp; i++) {
        result *= base;
    }
    
    if (exponent < 0) {
        result = 1.0 / result;
    }
    
    return result;
}
