#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    int rest[10] = { 0 };
    int num[42] = { 0 };
    int count = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &N);
        rest[i] = N % 42;
        num[rest[i]] = 1;
    }

    for (int i = 0; i < 42; i++) {
        if (num[i] == 1) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}