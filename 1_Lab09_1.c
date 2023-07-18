#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    
    int input, score, sum;
    char* test;

    scanf("%d", &input);

    for (int i = 0; i < input; i++) {
        sum = 0;
        score = 1;

        test = (char*)malloc(80 * sizeof(char));

        if (test == NULL) {
            printf("메모리 할당 실패\n");
            return 1;
        }

        scanf("%s", test);

        for (int j = 0; j < strlen(test); j++) {
            if (test[j] == 'O') {
                sum += score;
                score++;
            }
            if (test[j] == 'X')
                score = 1;
        }

        printf("%d\n", sum);

        free(test);
    }

    return 0;
}
