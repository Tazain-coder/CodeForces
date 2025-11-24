#include <stdio.h>

int main() {
    int c;
    int res=0;
    scanf("%d",&c);
    for (int i=0;i < c;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if (a+b+c>1)
            res++;
    }
    printf("%d",res);

    return 0;
}