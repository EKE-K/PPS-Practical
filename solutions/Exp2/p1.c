/*
Problem Description1:
Arav and Aaron are participating in the Bike racing. Arav crossed some milestones earlier and Aaron
crossed some milestones earlier during their racing because they have changed their speeds at different
times.Both of them like to know the difference in speeds between them at different stages of racing.Can you
help find the speed difference between Arav and Aaron?
Constraints: 20≤ aravspeed ≤100 , 20≤ aaronspeed ≤100
Input Format: The first line of input represents the speed of Arav. The second line of input represents speed
of Aaron.
Output Format: Print difference between the driving speed of two participants in a single line.
*/

#include<stdio.h>

int main() {
    int aravspeed, aaronspeed;
    scanf("%d %d", &aravspeed, &aaronspeed);
    printf("%d", aravspeed-aaronspeed);
    return 0;

}