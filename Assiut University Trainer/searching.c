#include <stdio.h>

int main() {
    int n,k,x;
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&k);
        arr[i] = k;
    }
    scanf("%d",&x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x) {
            printf("%d",i);
            return 0;
        }
    }
    printf("-1");
    
    return 0;
}