/*
Problem Description:
Write a program to find the number of distinct elements in an unsorted array. (Do it without sorting
the array)
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n*sizeof(int));
    int i, j, distinct = 0;
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++) {
        for(j=0; j<i; j++) {
            if(arr[i]==arr[j]) {
                break;
            }
        }
        if(i==j) {
            distinct++;
        }
    }
    printf("%d", distinct);
    return 0;
}

/*
5
1 3 2 2 3
3
*/