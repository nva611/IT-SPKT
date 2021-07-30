#include <stdio.h>
void input(int &n);
void Magic_Matrix(int A[][100], int n);
void output(int A[][100], int n);
void Rhombus_Matrix(int A[][100], int n);
void main()
{
	int n;
	input(n);
	int A[100][100] = {0};
	Magic_Matrix(A, n);
	output(A, n);
}
void input(int &n)
{
	scanf("%d", &n);
}
void Rhombus_Matrix(int A[][100], int n)
{
	int iStart = n-1;
	int jStart = 0;
	int count = 1;
	while(count <= n*n)
	{
		int i = iStart, j = jStart;
		while(count<=(jStart+1)*n)
		{
			A[i][j] = count++;
			i--; 
			j++;
		}
		iStart++;
		jStart++;
	}
}
void Magic_Matrix(int A[][100], int n)
{
	Rhombus_Matrix(A, n);
	for(int i=n/2+1; i<n/2+n-1; i++)
	{
		for(int j=0; j<n/2+1; j++)
			if(A[i][j]!=0)
				A[i][j+n]=A[i][j];
		for(j=n/2+n; j<=(n-1)*2; j++)
			if(A[i][j]!=0)
				A[i][j-n]=A[i][j];
	}
	for(int j=n/2+1; j<n/2+n-1; j++)
	{
		for(int i=0; i<n/2; i++)
			if(A[i][j]!=0)
			{
				
				A[i+n][j]=A[i][j];
			}
		for(i=n/2+n; i<=(n-1)*2; i++)
			if(A[i][j]!=0)
				A[i-n][j]=A[i][j];
	}
}
void output(int A[][100], int n)
{
	for(int i=n/2; i<n/2+n; i++)
	{
		for(int j=n/2; j<n/2+n; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
}
