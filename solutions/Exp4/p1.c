/*
Problem Description:
Write a program in C to sort the matrix row-wise and column-wise.
Input format: The first line contains two integers m and n, representing the no.of rows and columns in the
matrix respectively. The next m lines contain n space-separated integers in each line.
Output format; Print the sorted matrix.
*/

#include<stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n];
    int i, j;
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    int temp;
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            int k;
            for(k=j+1; k<n; k++) {
                if(a[i][j] > a[i][k]) {
                    temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
            }
        }
    }
    printf("\n");
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            int k;
            for(k=j+1; k<m; k++) {
                if(a[j][i] > a[k][i]) {
                    temp = a[j][i];
                    a[j][i] = a[k][i];
                    a[k][i] = temp;
                }
            }
        }
    }
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;

}

/*
OUTPUT:
2 2
1 3
3 2


1 3 
2 3 
*/