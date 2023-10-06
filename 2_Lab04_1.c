#include<stdio.h>

int main() {
	int n;
	int max = 0;
	float avg = 0;

	scanf_s("%d", &n);

	int score[1001];

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &score[i]);
		if (max < score[i]) {
			max = score[i];
		}
	}

	for (int i = 0; i < n; i++) {
		avg += (float)score[i] / max * 100;
	}

	printf("%f\n", avg / n);

	return 0;
}