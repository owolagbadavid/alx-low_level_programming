#include <stdio.h>
#include <math.h>

// A function that returns the nth Fibonacci number using a formula
long long int fibonacci(int n) {
    double phi = (1 + sqrt(5)) / 2; // the golden ratio
    return round(pow(phi, n) / sqrt(5)); // round the result to the nearest integer
}

int main() {
    int n = 98; // the term to find
    printf("The %dth Fibonacci number is %lld\n", n, fibonacci(n)); // print the result
    return 0;
}
