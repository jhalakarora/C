#include <stdio.h>
int main() {
    float p;
    printf("Enter the value of principal amount.");
    scanf("%f",&p);
    float n;
    printf("Enter the value of number of years.");
    scanf("%f",&n);
    float r;
    printf("Enter the value of rate of interest.");
    scanf("%f",&r);
    float s;
    s=(p*n*r)/100;
    printf("Simple interest is%f",s);
    return 0;
}