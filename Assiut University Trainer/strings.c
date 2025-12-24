#include <stdio.h>
#include <string.h>

int main() {
    char s1[21];
    char s2[21];

    scanf("%s %s",s1,s2);

    printf("%d %d\n",strlen(s1),strlen(s2));
    printf("%s%s\n",s1,s2);

    char tmp;
    tmp = s1[0];
    s1[0] = s2[0];
    s2[0] = tmp;

    printf("%s %s\n",s1,s2);

    return 0;
}