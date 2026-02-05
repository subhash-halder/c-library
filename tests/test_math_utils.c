#include <stdio.h>
#include <assert.h>
#include "../include/math_utils/math_utils.h"

void test_factorial() {
    assert(factorial(0) == 1);
    assert(factorial(1) == 1);
    assert(factorial(5) == 120);
    assert(factorial(10) == 3628800);
    printf("✓ test_factorial passed\n");
}

void test_is_prime() {
    assert(is_prime(2) == 1);
    assert(is_prime(3) == 1);
    assert(is_prime(4) == 0);
    assert(is_prime(17) == 1);
    assert(is_prime(20) == 0);
    printf("✓ test_is_prime passed\n");
}

void test_gcd() {
    assert(gcd(48, 18) == 6);
    assert(gcd(100, 50) == 50);
    assert(gcd(17, 19) == 1);
    printf("✓ test_gcd passed\n");
}

void test_lcm() {
    assert(lcm(12, 18) == 36);
    assert(lcm(4, 6) == 12);
    assert(lcm(7, 5) == 35);
    printf("✓ test_lcm passed\n");
}

void test_power() {
    assert(power(2, 3) == 8);
    assert(power(5, 0) == 1);
    assert(power(10, 2) == 100);
    printf("✓ test_power passed\n");
}

int main() {
    printf("Running Math Utils Tests...\n\n");
    
    test_factorial();
    test_is_prime();
    test_gcd();
    test_lcm();
    test_power();
    
    printf("\nAll math utils tests passed!\n");
    return 0;
}
