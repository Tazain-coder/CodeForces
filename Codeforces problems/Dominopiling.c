#include <stdio.h>

int main() {

    int m,n;
    scanf("%d %d",&m,&n);
    int boardSize = m*n;
    printf("%d",boardSize>>1);
}