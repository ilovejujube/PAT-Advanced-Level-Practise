#include <cstdio>

const int N = 54;
char mp[5] = {'S', 'H', 'C', 'D','J'};//牌的关系与花色的对应关系 
int start[N+1], end[N+1], next[N+1];//next数组用来存放每个位置上牌在操作后的位置 

int main(void)
{
	int K;
	scanf("%d", &K);
	
	for(int i = 1; i <= N; i++) 
	{
		start[i] = i;
	}//初始化牌的编号 
	for(int i = 1; i <= N; i++)
	{
		scanf("%d", &next[i]);
	} 
	for(int step = 0; step < K; step++)
	{
		for(int i = 1; i <= N; i++)
		{
			end[next[i]] = start[i];
		}
		for(int i = 1; i <= N; i++)
		{
			start[i] = end[i];
		}
	}
	
	for(int i = 1; i <= N; i++)
	{
		if(i != 1)printf(" ");
		start[i]--;
		printf("%c%d", mp[start[i] / 13], start[i] % 13 + 1);
	}
	return 0;
} 


#if(0) //下面这段程答案正确，但是会造成溢出漏洞， 我不会修改 
int main(void)
{
	char start[56][4] = {"S1","S2","S3","S4","S5","S6","S7","S8","S9","S10","S11","S12","S13",
						"H1","H2","H3","H4","H5","H6","H7","H8","H9","H10","H11","H12","H13",
						"C1","C2","C3","C4","C5","C6","C7","C8","C9","C10","C11","C12","C13",
						"D1","D2","D3","D4","D5","D6","D7","D8","D9","D10","D11","D12","D13",
						"J1", "J2"
					};  
	int k;
	scanf("%d", &k);
	int i, n = 54, b = 0;
	char end[56][4];
	while(k--)
	{
		while(n--)
		{
			scanf("%d", &i);
			strcpy(end[b], start[i-1]);
			b++;
		}
		for(int j = 0; j < 54; j++)
		{
			strcpy(start[i], end[i]);
		}			
	}
	for(int j = 0; j < 54; j++) 
	{
		printf("%s", end[j]);
		if(j != 53)
		{
			printf(" ");
		}
	}
	printf("\n");
	
	
	return 0;
}
#endif
