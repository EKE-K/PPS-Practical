/*
Problem Description 1:
Tina's brother gave her a friendly task of calculating the number of squares in a board that has n*n squares
of dimensions 1cm *1cm each. Help her to find the number of total squares including all small and big ones.
Constraints: 2 ≤ n ≤ 20
Input Format: The only line of the input represents a value of "n"
Output Format: Print the number of squares in the n*n board."
*/

// above is just a comment DO NOT COPY IT

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", n*(n+1)*(2*n+1)/6);
    return 0;

}

/*
OUTPUT:
5
55
*/