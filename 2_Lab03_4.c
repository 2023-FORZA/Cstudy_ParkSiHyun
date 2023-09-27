#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    long zip, doc;
    int go, sleep;

    scanf("%ld %ld", &zip, &doc);
    scanf("%d %d", &go, &sleep);

    long answer1 = 0;
    if (zip % 8 == 0) {
        answer1 = zip % 8 + (zip / 8 - 1) * (8 + sleep);
        answer1 += 8;
    }
    else {
        answer1 = zip % 8 + (zip / 8) * (8 + sleep);
    }

    long answer2 = 0;
    if (doc % 8 == 0) {
        answer2 = (doc / 8 - 1) * (8 + go + go + sleep);
        answer2 += 8 + go;
    }
    else {
        answer2 = doc % 8 + (doc / 8) * (8 + go + go + sleep) + go;
    }

    if (answer1 < answer2) {
        printf("Zip\n");
        printf("%ld", answer1);
    }
    else {
        printf("Dok\n");
        printf("%ld", answer2);
    }

    return 0;
}
