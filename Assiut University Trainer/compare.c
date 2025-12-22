#include <stdio.h>
#include <string.h>

int main() {
    char s1[21];
    char s2[21];

    scanf("%s %s",s1,s2);
    int comp = strcmp(s1,s2);
    if(comp == -1) printf("%s",s1);
    else if(comp == 1) printf("%s",s2);
    else if(comp == 0) printf("%s",s1);
    
    return 0;
}