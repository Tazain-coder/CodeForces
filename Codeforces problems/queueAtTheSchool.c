#include <stdio.h>

int main() {
    int n,t;
    scanf("%d %d",&n,&t);
    char s[51];
    scanf("%s",s);


    while (t)
    {
        for (int i = 1; i < n; i++)
        {
            if (s[i] == 'G' && s[i-1] =='B') {
                s[i] = 'B';
                s[i-1] = 'G';
                i++;
            }
        }
        t--; 
    }
    printf("%s",s);
    return 0;
}