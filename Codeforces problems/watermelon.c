#include <stdio.h>

int main(void) {
    int w;
    if (scanf("%d", &w) != 1) return 0;
    if (w > 2 && w % 2 == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
