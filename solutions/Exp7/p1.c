/*
Problem Description:
Write a C program to demonstrate functions without arguments and with return value.
The written code is used to check whether the given number is a prime number or not.
Write the function prime().
Sample Input and Output:
Enter a number : 5
The given number is a prime number
*/

#include<stdio.h>
#include<stdlib.h>

int prime() {
    int n;
    scanf("%d", &n);
    int i;
    for(i=2; i<n; i++) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("Enter a number : ");
    if(prime()) {
        printf("The given number is a prime number");
    } else {
        printf("The given number is not a prime number");
    }
    return 0;
}

/*
OUTPUT:
Enter a number : 109
The given number is a prime number
*/