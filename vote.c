#include <stdio.h>
int main()
{
    printf("Enter your age");
    int age;
    scanf("%d", age);
    if(age<18) {
        printf("You are not eleigible to vote.");
    }
    else {
        printf("You are eligible to vote.");
    }
    return 0;
}