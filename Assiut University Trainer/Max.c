#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int num=0,max=0;
        
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num);
        if (num>max) max = num;  
    }
    printf("%d",max);
    

    return 0;
}