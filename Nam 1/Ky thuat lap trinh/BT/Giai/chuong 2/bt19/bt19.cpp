#include <stdio.h>

void output_Matrix(int A[][100], int n);
void Magic_Matrix(int A[][100], int n);
void input(int &n);

void main()
{
	int A[100][100]={0};
	int n;
	input(n);
	Magic_Matrix(A, n);
	output_Matrix(A, n);
}
void input(int &n)
{
	scanf("%d", &n);
}
void Magic_Matrix(int A[][100], int n)
{
	int i = n/2;
	int j = n/2 + 1;
	int count = 1;
	while(count<=n*n)
	{
		while(A[i][j]==0 && i>=0 && i<n && j>=0 && j<n)
			A[i--][j++] = count++;
		if(j>n-1)
			j = 0;
		else if(j<0)
			j = n-1;
		if(i<0)
			i = n-1;
		else if(i>n-1)
			i = 0;
		if(A[i][j]!=0)
		{
			i++;
			j++;
		}
	}
}
void output_Matrix(int A[][100], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
}
