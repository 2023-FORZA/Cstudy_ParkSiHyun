#include<stdio.h>

int main(void)
{
	int tc, i;
	
	scanf("%d", &tc);
	
	for(i = 0; i < tc; i++)
	{
		int num, tmp = -1, reverse = 0;
		
		scanf("%d", &num);
		
		tmp = num;
		for(tmp = num; tmp ; tmp /= 10)
			reverse = (reverse + tmp % 10) * (tmp > 9 ? 10 : 1);
			
		num += reverse;
		reverse = 0;
		
		tmp = num;
		for(tmp = num; tmp; tmp /= 10)
			reverse = (reverse + tmp % 10) * (tmp > 9 ? 10 : 1);
		
		printf("%s\n", num == reverse ? "YES" : "NO");	
	}
	
	return 0;
}