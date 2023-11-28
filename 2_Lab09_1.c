#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int a, b;
    char str[10];
    int j = 1;

    while (1) {
        scanf("%d%s%d", &a, str, &b);
        if (strcmp(str, "E") == 0) {
            break;
        }

        if (strchr(str, '=')) {
            if (strchr(str, '>')) {
                if (a >= b) {
                    printf("Case %d: true\n", j);
                }
                else {
                    printf("Case %d: false\n", j);
                }
            }
            else if (strchr(str, '<')) {
                if (a <= b) {
                    printf("Case %d: true\n", j);
                }
                else {
                    printf("Case %d: false\n", j);
                }
            }
            else if (strchr(str, '!')) {
                if (a != b) {
                    printf("Case %d: true\n", j);
                }
                else {
                    printf("Case %d: false\n", j);
                }
            }
            else if (strchr(str, '=')) {
                if (a == b) {
                    printf("Case %d: true\n", j);
                }
                else {
                    printf("Case %d: false\n", j);
                }
            }
        }
        else if (strchr(str, '>')) {
            if (a > b) {
                printf("Case %d: true\n", j);
            }
            else {
                printf("Case %d: false\n", j);
            }
        }
        else if (strchr(str, '<')) {
            if (a < b) {
                printf("Case %d: true\n", j);
            }
            else {
                printf("Case %d: false\n", j);
            }
        }
        j++;
    }

    return 0;
}
