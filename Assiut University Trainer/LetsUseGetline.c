#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000001];
    scanf("%[^\\]",s1);
    
    printf("%s",s1);
    return 0;
}