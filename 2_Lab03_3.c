#include <stdio.h>

int main() {
    int year, month, day, N;

    scanf_s("%d-%d-%d", &year, &month, &day);

    scanf_s("%d", &N);

    day += N;

    while (day > 30) {
        day -= 30;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }

    printf("%04d-%02d-%02d\n", year, month, day);

    return 0;
}
