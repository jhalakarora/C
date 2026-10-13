#include <stdio.h>
int main() {
    int a,b,c,x,max;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter 3rd number: ");
    scanf("%d",&c);

    x=(a>b)?a:b;
    max=(x>c)?x:c;
    printf("The largest number is: %d", max);
    return 0;
}