#include <stdio.h>

int main() {
    long long n,sum=0;
    scanf("%lld",&n);

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d",&a);
        sum += a;
    }
    if (sum<0) sum = -sum;
    
    printf("%lld",sum);

    return 0;
}