#include <stdio.h>

void nhap(int &m, int &n, int B[]);
void chuyen1Sang2Chieu(int m, int n, int B[], int A[][100]);
void xuat(int m, int n, int A[][100]);

void main()
{
	int m, n, A[100][100], B[10000];
	nhap(m, n, B);
	chuyen1Sang2Chieu(m, n, B, A);
	xuat(m, n, A);
}
void nhap(int &m, int &n, int B[])
{
	scanf("%d%d", &m , &n);
	for(int i=0; i<m*n; i++)
		scanf("%d", &B[i]);
}
void chuyen1Sang2Chieu(int m, int n, int B[], int A[][100])
{
	for(int i=0; i<m*n; i++)
	{
		A[i/n][i%n] = B[i];
	}
}
void xuat(int m, int n, int A[][100])
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
}
