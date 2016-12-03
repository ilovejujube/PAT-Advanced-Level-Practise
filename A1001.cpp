#include <cstdio>

void print(int sum)
{
	int s[8] = {0};
	int i = 0;
	if(sum == 0)
	{
		printf("0\n");
		return;
	}
	if(sum < 0)
	{
		printf("-");
		sum = -sum;
	}
	while(sum)
	{
		s[i++] = sum % 10;
		sum /= 10;
	}
	for(int j = i - 1; j >= 0; j--)
	{
		printf("%d", s[j]);
		if(j % 3 == 0&& j)
		{
			printf(",");
		} 
	}
	
} 

int main(void)
{	
	int a, b;
	scanf("%d %d", &a, &b);
	
	int sum = a + b;
	
	print(sum);
	return 0;
} 