#include <stdio.h>

int main() {
    int n,count[4]={0,0,0,0};
    scanf("%d",&n);
    int tmp;
    for (int i = 0; i < n; i++)
    {

        scanf("%d",&tmp);
        printf("%d\n",tmp);
        
        if (tmp%2==0) count[0]+=1; //check if even
        else count[1]+=1; //check if odd
        
        if (tmp>0) count[2]+=1; //check if positive
        if (tmp<0) count[3]+=1; //check if negetive     

    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegetive: %d\n",count[0],count[1],count[2],count[3]);
    

    return 0;
}