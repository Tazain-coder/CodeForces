#include <stdio.h>
#include <string.h>

int main() {
    int a=0,d=0;

    int n;
    scanf("%d",&n);
    char g[n];
    scanf("%s",g);

    int len = strlen(g);

    for (int i=0; i < len; i++) {
        char c = g[i];
        if (c=='A') a++;
        else if (c=='D') d++;
    }

    if(a>d) printf("Anton");
    else if(a<d) printf("Danik");
    else printf("Friendship");

    return 0;
}