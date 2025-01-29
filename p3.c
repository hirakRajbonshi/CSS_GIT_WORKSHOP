#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i=2;i<=n;i++)
    {
        fact = fact * i;
    }
    return fact;

}

int main() {
    int n; 
    scanf("%d", &n);
    int fact = factorial(n);
    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}