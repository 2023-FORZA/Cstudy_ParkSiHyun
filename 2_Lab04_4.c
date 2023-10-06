#include <stdio.h>

int main() {
    int T, N, D, V, F, C;
    scanf("%d", &T);
    for (int t = 0; t < T; ++t) {
        scanf("%d %d", &N, &D);
        int count = 0;
        for (int n = 0; n < N; ++n) {
            scanf("%d %d %d", &V, &F, &C);
            double fc = (double)F / C;
            if (V * fc >= D)
                ++count;
        }
        printf("%d\n", count);
    }
    return 0;
}
