/*
Problem Description:
Write a program to check whether the given two strings are equal or not without using string library
functions.
At the time of execution, the program should print the message on the console as:
string1 :
For example, if the user gives the input as:
string1 : Kaveri
Next, the program should print the message on the console as:
string2 :
For example, if the user gives the input as:string2 : Kaveri
then the program should print the result as:
equal
In the same way if the input is given as "Kaveri" and "kaveri", then the result will be "not equal".
Note: Do use the printf() function with a newline character (\n) at the end.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    char *str1 = (char *)malloc(100*sizeof(char));
    char *str2 = (char *)malloc(100*sizeof(char));
    printf("string1 : ");
    scanf("%s", str1);
    printf("string2 : ");
    scanf("%s", str2);
    int i = 0;
    while(str1[i]!='\0' && str2[i]!='\0') {
        if(str1[i]!=str2[i]) {
            printf("not equal");
            return 0;
        }
        i++;
    }
    if(str1[i]=='\0' && str2[i]=='\0') {
        printf("equal");
    } else {
        printf("not equal");
    }
    return 0;
}

/*
OUTPUT:
string1 : Kaveri
string2 : Kaveri
equal
*/