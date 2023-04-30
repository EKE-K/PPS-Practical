/*
Problem Description 2:
Binita was travelling from Chennai to Delhi in Rajdhani Express. The train have arrived at the destination
later than the estimated time. So, Binita wants to know the total number of hours and minutes the train was delayed.
Can you help Binita in finding the exact hour and time Rajdhani Express was delay on the day of Binita's journey?
Constraint: 100 ≤ tot_mins ≤ 550
Input Format: The only line of input has single value of variable tot_mins of type integer representing total
minutes.
Output Format: Print the Number of Hours and Minutes in a single line.
*/

#include<stdio.h>

int main() {
    int tot_mins;
    scanf("%d", &tot_mins);
    printf("%d Hours %d Minutes", tot_mins/60, tot_mins%60);
    return 0;

}