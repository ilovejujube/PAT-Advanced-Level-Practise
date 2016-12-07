#include <cstdio>

int main(void)
{
	int n;
	scanf("%d", &n);
	int num[n+1], sum = 0;
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &num[i]);
		sum += num[i];
	}
	int m, a, b;
	int subsum = 0;

	scanf("%d", &m);
	int sh[m];
	for(int i = 0; i <m; i++)
	{
		scanf("%d%d", &a, &b);
		if(a < b)
		{
			int temp = a;
			a = b;
			b = temp;
		}
		for(int j = a; j <= b; j++)
		{
			subsum += num[i];
		}
		int other = sum + num[a] + num[b] - subsum;
		if(other > subsum)
		{
			sh[m] = subsum;
		}
		else
		{
			sh[m] = other; 
		}
	}
	for(int i = 0; i < m; i++)
	{
		printf("%d", sh[i]);
		if(i != m - 1)
		{
			printf(" ");
		} 
	}
	printf("\n");
	return 0;
} 