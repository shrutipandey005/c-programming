#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, sum = 0, temp;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if(sum == n)
        printf("Strong Number\n");
    else
        printf("Not Strong Number\n");

    return 0;
}
