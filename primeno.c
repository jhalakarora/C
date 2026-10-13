#include <stdio.h>
int main() {
    int n=31;
    int count=0;
    
    if (n<=1)
    printf("%d is not prime",n);
    else {
        for (int i=2; i<=n; i++) {
            if(n%i ==0) {
                count++;
            }
        }    
    }
    if (count==1) printf("%d is prime", n);
    return 0;
}
