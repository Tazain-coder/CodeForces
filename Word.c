#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int uc = 0, lc = 0;
    char word[101];

    scanf("%s", word);

    int len = strlen(word);
    for (int i = 0; i < len; i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z') uc++;
        if (word[i] >= 'a' && word[i] <= 'z') lc++;
        
    }
    if (uc <= lc) { 
        for (int i = 0; i < len; i++)
        {
            word[i] = tolower(word[i]);
        }
    }
    else if (uc > lc) { 
        for (int i = 0; i < len; i++)
        {
            word[i] = toupper(word[i]);
        }
    }

    printf("%s\n",word);

    return 0;
}