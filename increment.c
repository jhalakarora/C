#include <stdio.h>
int main() {
    int x;
    printf("Enter number:\n");
    scanf("%d", &x);
    printf("Increment: \n");
    printf("%d\n", x++);
    printf("%d\n", x++);

    printf("Decrement: \n");
    printf("%d\n", --x);
    printf("%d\n", --x);
    return 0;
}