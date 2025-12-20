#include <stdio.h>

int main() {
    int t,p;
    scanf("%d %d",&t,&p);

    if (t-p>=0)
        printf("%d",t-p);
    else printf("%d",0);
    return 0;
}