#include <stdio.h>

int main() {
    int n,k,min,idx=1;
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&k);
        arr[i] = k;
        if (i==0) min = k;
        if (arr[i] < min && arr[i] != min) {
            min = arr[i];
            idx = i+1;
        }
        
    }
    printf("%d %d",min,idx);

    
    return 0;
}