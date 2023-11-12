#include <stdio.h>

int N, checkMilk, cnt;

int main() {
    scanf("%d", &N);

    while (1) {
        scanf("%d", &checkMilk);
        if (checkMilk == 0)
            break;
        else
            N--;
    }

    cnt++;

    for (int i = 0; i < N; i++) {
        int milk;
        scanf("%d", &milk);

        if (checkMilk == 0 && milk == 1) {
            cnt++;
            checkMilk = milk;
        }
        else if (checkMilk == 1 && milk == 2) {
            cnt++;
            checkMilk = milk;
        }
        else if (checkMilk == 2 && milk == 0) {
            cnt++;
            checkMilk = milk;
        }
    }

    printf("%d", cnt);

    return 0;
}
