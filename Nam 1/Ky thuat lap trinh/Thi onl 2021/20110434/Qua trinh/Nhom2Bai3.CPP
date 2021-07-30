#include <stdio.h>

void nhap(int &m, int &n, int A[][100]);
void chuyenSang1Chieu(int m, int n, int A[][100], int B[]);
void xuat(int m, int n, int B[]);


void main()
{
	int m, n, A[100][100], B[10000];
	nhap(m, n, A);
	chuyenSang1Chieu(m, n, A, B);
	xuat(m, n, B);
}
void nhap(int &m, int &n, int A[][100])
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &A[i][j]);
}
void chuyenSang1Chieu(int m, int n, int A[][100], int B[])
{
	int nb = m*n;
	for(int k=0; k<nb; k++)
		B[k] = A[k/n][k%n];
}
void xuat(int m, int n, int B[])
{
	for(int i=0; i<m*n; i++)
		printf("%d ", B[i]);
}