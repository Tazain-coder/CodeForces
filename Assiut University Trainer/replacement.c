#include <stdio.h>

int main() {
    int n,k;
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&k);
        arr[i] = k;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0) arr[i]=1;
        else if (arr[i]<0) arr[i]=2;
    }
    for (int i = 0; i < n; i++)
            printf("%d ",arr[i]);
    
    return 0;
}