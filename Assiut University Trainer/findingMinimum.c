#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    long long a[N];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &a[i]);
    }

    for (int i = 0; i < N; i += K) {
        long long mn = a[i];
        for (int j = i; j < i + K && j < N; j++) {
            if (a[j] < mn)
                mn = a[j];
        }
        printf("%lld ", mn);
    }

    return 0;
}
