#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        char* round;
        if (N <= 25) {
            round = "World Finals";
        }
        else if (N <= 1000) {
            round = "Round 3";
        }
        else if (N <= 4500) {
            round = "Round 2";
        }
        else {
            round = "Round 1";
        }

        printf("Case #%d: %s\n", t, round);
    }

    return 0;
}