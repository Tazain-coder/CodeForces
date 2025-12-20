#include <stdio.h>

int main() {
    long long n;
    int luck=0;
    scanf("%lld", &n);
    
    while(n>0){
        int d = n%10;
        if (d == 4 || d==7) {
            luck++;
        }
        
        n/=10;
    }

    if (luck == 4 || luck == 7) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}