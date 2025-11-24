#include <stdio.h>
#include <stdlib.h>

int main() {
    long long  w,k,n;
    scanf("%lld %lld %lld", &k,&n,&w);

    long long total = k*w*(w+1)/2;
    long long need = total -n;

    if (need < 0) need = 0;

    printf("%lld", need);
}