#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    // assuming all inputs are positive integers
    if (n<=1) {
        printf("-1");
        return 0;
    }

    for (int i=2;i<=n;i+=2) {
        printf("%d\n",i);
    }
    
    return 0;
}