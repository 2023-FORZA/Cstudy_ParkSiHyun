#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int T;
	int a, b, c;

	scanf("%d", &T);
	if (T % 10 == 0) {
		a = T / 300;
		T = T % 300;
		b = T / 60;
		T = T % 60;
		c = T / 10;

		printf("%d %d %d", a, b, c);

	}
	else
		printf("-1");

	return 0;
}