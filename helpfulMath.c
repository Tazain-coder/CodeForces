#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", &s);

    for (int i = 0; i < strlen(s); i+=2)
    {
        for (int j = 0; j < strlen(s); j+=2)
        {   
            if (s[i] < s[j]) {
                int temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }    
    }

    printf("%s",s);
    
}