#include <stdio.h>
#include <string.h>

int main() {
    char s1[21];
    char s2[21];


    scanf("%s %s",s1,s2);

    char c1[21],c2[21];
    strcpy(c1,s1);
    strcpy(c2,s2);

    printf("%d %d\n",strlen(s1),strlen(s2));
    printf("%s\n",strcat(c1,c2));

    char tmp;
    tmp = s1[0];
    s1[0] = s2[0];
    s2[0] = tmp;

    printf("%s %s\n",s1,s2);

    return 0;
}