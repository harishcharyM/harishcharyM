#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int n = num*2-1;
	int arr[n][n];
	int temp = num;
	int n1 = n;
	int first = 0;
	int last = n;
	int pos = 0;
	last = n-1;
	for(int i = 0; i <n1 ; i++)
	{
		for(int j = 0; j < n1; j++)
		{
			arr[i][j] = 0;
		}
		
	}
		for(int i = 0;i<temp;i++)
		{
			for(int j = i; j <n; j++)
			{
			
				arr[i][j] = num;
				arr[j][i] = num;
				arr[n-1][j] = num;
				arr[j][n-1] = num;
			}
		num--;
		n--;

		}
		
	
	for(int i = 0; i <n1 ; i++)
	{
		for(int j = 0; j < n1; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
