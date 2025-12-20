#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int half = n/2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==half&&j==half)
            {
                printf("X");
                continue;
            }
            else if (i==j)
            {
                printf("\\");
            }
            else if (i==(n-j-1))
            {
                printf("/");
            }
            else
            {
                printf("*");
            }
            
            
        }
        printf("\n");
        
    }
    
    return 0;
}
