#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long L, R;
        scanf("%lld %lld", &L, &R);

        if (L > R) {
            long long tmp = L;
            L = R;
            R = tmp;
        }

        long long n = R - L + 1;
        long long sum = n * (L + R) / 2;

        printf("%lld\n", sum);
    }

    return 0;
}

