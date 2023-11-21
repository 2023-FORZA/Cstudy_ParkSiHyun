	#include <stdio.h>

	int main()
	{
		int N, M, K;
		int mat1[100][100];	
		int mat2[100][100];	
		int result[100][100] = { 0, };	

		scanf("%d %d", &N, &M);	
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++)
				scanf("%d", &mat1[i][j]);
		}

		scanf("%d %d", &M, &K);
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < K; j++)
				scanf("%d", &mat2[i][j]);
		}

		for (int i = 0; i < N; i++) {
			for (int k = 0; k < K; k++) {
				for (int j = 0; j < M; j++) {
					result[i][k] += mat1[i][j] * mat2[j][k];
				}
			}
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < K; j++) {
				printf("%d ", result[i][j]);	
			}
			printf("\n");
		}

		return 0;

	}