#include <stdio.h>
#include <string.h>

int main() {
    char s[101],t[101];
    scanf("%s",s);
    scanf("%s",t);

    int lent=strlen(t);
    int len=strlen(s);

    if (len != lent ) {
            printf("NO\n");
            return 0;
    }

    strrev(t);
    for (int i = 0; i < len; i++)
    {
        if (s[i] != t[i] ) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");    
    return 0;
}