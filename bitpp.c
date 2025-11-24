#include <stdio.h>
#include <string.h>

int main() {
    int n,x=0;
    char s[4];

    scanf("%d",&n);

    for (int i = 0; i<n;i++) {
        scanf("%s",s);
        int sum = 0;
        for (int j = 0; j<3;j++)
        {
            sum += s[j];
        }

        if (sum == 174) {
            x++;
        }
        else if (sum == 178) {
            x--;
        }
    }
    printf("%d",x);
}