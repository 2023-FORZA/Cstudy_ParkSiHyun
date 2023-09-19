#include<stdio.h>

int main() 
{

	int s[5];
	int count = 0;

	for (int a = 0; a < 5; a++) 
	{
		scanf_s("%d", &s[a]);
	}
	
	for (int i = 1;; i++) 
	{
		for (int j = 0; j < 5; j++)
		{
			if (i % s[j] == 0)
				count++;
		}

		if (count >= 3)
		{
			printf("%d", i);
			break;
		}
		else
			count = 0;
	}
	return 0;
}