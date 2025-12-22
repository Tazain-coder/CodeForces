#include <stdio.h>
#include <string.h>


int main() {
    int sum=0;
    char s[1000001];
    scanf("%s",&s);

    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        sum = sum + (s[i]-'0');
    }
    
    printf("%d",sum);
    return 0;
}