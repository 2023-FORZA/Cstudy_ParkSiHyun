#include <stdio.h>
int main()
{
	int n, max = 0, number = 0;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &n);
		if (n > max)
		{
			max = n;
			number = i + 1;
		}
	}

	printf("%d\n%d", max, number);

}