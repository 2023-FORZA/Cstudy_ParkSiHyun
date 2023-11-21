#include<stdio.h>

#define Pi 3.14159265358979

int main() {
	int R;

	scanf("%d", &R);

	printf("%.6f\n", Pi*R*R);
	printf("%.6f\n", 2.0*R*R);

	return 0;

}