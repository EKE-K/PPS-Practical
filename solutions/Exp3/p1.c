/*
Problem Description:
Laaysa with her friends going to the theatre for a movie. The seating arrangement is triangular in shape.
Theatre staff insisted the audience to sit in odd row if the seat number is odd and in even row if the seat number
is even. But the instruction is very confusing for Laaysa and her friends.So help them with the seating layout so
that they can sit in correct seats.
Note: Do use the printf() function with a newline character (\n).
Constraints: 4 ≤ N ≤ 20
Input Format: Only line of input has single integer value representing the number of rows in the theatre.
Output Format: Print the layout based on the number of rows specified in input.
Instruction: To run your custom test cases strictly map your input and output layout with the visible test cases
*/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i, j;
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            if(i%2==0) {
                if(j%2==0) {
                    printf("E");
                } else {
                    printf("O");
                }
            } else {
                if(j%2==0) {
                    printf("O");
                } else {
                    printf("E");
                }
            }
        }
        printf("\n");
    }
    return 0;

}

/*
OUTPUT:
4
E
OE
EOE
OEOE
*/