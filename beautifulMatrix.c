#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[5][5];
    int v,x,y;
    int exit=0;
    for (int i = 0;i<5;i++)
    {
        if (exit) break;
        for (int j=0;j<5;j++)
        {
        scanf("%d",&matrix[i][j]);
        
        if (matrix[i][j] > 0)
            {
                x = i+1;
                y = j+1;
                exit = 1;
                break;
            }
        } 
    }
    printf("%d",abs(x-3)+abs(y-3));
}
