#include <stdio.h>

int rev(int n)

{
    int a, b, c, d, rev;

    a = n % 10;
    b = (n % 100 - a) / 10;
    c = (n / 100) % 10;
    d = n / 1000;

    if (n > 10 && n < 100) { rev = a * 10 + b + c + d; }
    else if (n > 100 && n < 1000) { rev = a * 100 + b * 10 + c + d; }
    else if (n > 1000) { rev = a * 1000 + b * 100 + c * 10 + d; }
    else { rev = a + b + c + d; }

    return rev;

}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d", rev(rev(x) + rev(y)));

}