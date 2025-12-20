#include <stdio.h>
#include <string.h>


int main() {
    char first[101];
    char sec[101];
    scanf("%s", &first);
    scanf("%s", &sec);

    int sum1 = 0;
    int sum2 = 0;

    for (int i=0;i<strlen(first);i++) {
        if (first[i] >= 'A' && first[i] <= 'Z') first[i] = first[i]+=32;
        if (sec[i] >= 'A' && sec[i] <= 'Z') sec[i] = sec[i]+=32;
        
        if (first[i] < sec[i]) {
            printf("-1");
            return 0;
        }
        else if (first[i] > sec[i]) {
            printf("1");
            return 0;
        }
    }

    printf("0");
    return 0;

}