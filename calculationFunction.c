#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    scanf("%lld",&n);
    long long res = (pow(-1,n)*(2*n+1)-1)/4;
    printf("%lld",res);

    return 0;
}