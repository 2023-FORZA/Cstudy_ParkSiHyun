#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int A, B, C;
	int i;
	scanf("%d %d %d", &A, &B, &C);
	
	if (B >= C) 
		printf("-1\n");
	else {
		i = A / (C - B);
		printf("%d", (int)i + 1);
	}

	return 0;
}