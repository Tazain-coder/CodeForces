#include <stdio.h>

int main() {
    int n,en=0,ex;
    int max = 0;
    int pl = 0;
    scanf("%d",&n);
    

    for (int i = 0; i < n ; i++)
    {
        scanf("%d %d",&ex,&en);
        pl -= ex;
        pl += en;
        if (pl > max) max=pl;
    }
    printf ("%d",max);
    
    return 0;
}