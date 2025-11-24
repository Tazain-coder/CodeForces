#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;

    if (n%5==0) count = n/5 ;
    else count = n/5+1 ;
    printf("%d",count);
    return 0;
}
