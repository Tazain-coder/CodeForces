#include <stdio.h>

int main() {
    int n,k,x;
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&k);
        if (k<=10)
             printf("A[%d] = %d\n",i,k);
    }

    
    return 0;
}