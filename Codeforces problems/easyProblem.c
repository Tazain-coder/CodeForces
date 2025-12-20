#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum=0;
    int a;
    for (int i = 0; i < n; i++)
    {
        
        scanf("%d",&a);
        if (a == 1)
        {
            printf("HARD");
            return 0; 
        }      
    }
    printf("EASY");   

    return 0;
}