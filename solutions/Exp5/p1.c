/*
Problem Description:
Program to find the number of prime numbers and number of composite numbers in an array to which
memory is allocated dynamically using pointers.
Input format: The first line contains an integer n, representing the number of elements in that array. The
next line contains an integer array arr[] with n space-separated values.
Output format: The first line contains a number of primes The second line contains a number of composites
*/

#include<stdio.h>
#include<stdlib.h>

int isPrime(int n) {
    int i;
    for(i=2; i<n; i++) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n*sizeof(int));
    int i, prime = 0, composite = 0;
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        if(isPrime(arr[i])) {
            prime++;
        } else {
            composite++;
        }
    }    
    printf("%d\n%d", prime, composite);
    return 0;

}

/*
OUTPUT:
4
1 8 7 5
3
*/