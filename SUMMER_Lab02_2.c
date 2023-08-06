#include <stdio.h>

int main() {
    int x1, x2, x3;
    int y1, y2, y3;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);
    
    if ((y1 - y2) * (x1 - x3) == (x1 - x2) * (y1 - y3)) {
        printf("X");
    } else {
        int d[3];
        d[0] = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
        d[1] = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
        d[2] = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
        
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2 - i; j++) {
                if (d[j] > d[j + 1]) {
                    int temp = d[j];
                    d[j] = d[j + 1];
                    d[j + 1] = temp;
                }
            }
        }
        
        if (d[0] == d[1] && d[1] == d[2]) {
            printf("JungTriangle");
        } else if (d[0] == d[1] || d[1] == d[2]) {
            if (d[2] == d[0] + d[1])
                printf("Jikkak2Triangle");
            else if (d[2] < d[0] + d[1])
                printf("Yeahkak2Triangle");
            else
                printf("Dunkak2Triangle");
        } else {
            if (d[2] == d[0] + d[1])
                printf("JikkakTriangle");
            else if (d[2] < d[0] + d[1])
                printf("YeahkakTriangle");
            else
                printf("DunkakTriangle");
        }
    }
    
    return 0;
}
