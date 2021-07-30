#include <stdio.h>
int Nho_nhat_cot(int i, int j, int m, int A[][100]);
int Lon_nhat_dong(int i, int j, int n, int A[][100]);
void nhap(int &m, int &n, int A[][100]);
void xuat(int i, int j, int A[][100]);
void tim(int m, int n, int A[][100]);
void main()
{
	int A[100][100];
	int m, n;
	nhap(m, n, A);
	tim(m, n, A);
}
void tim(int m, int n, int A[][100])
{
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			if(Nho_nhat_cot(i, j, m, A)==1 && Lon_nhat_dong(i, j, n, A)==1)
				xuat(i, j, A);
}
int Nho_nhat_cot(int i, int j, int m, int A[][100])
{
	int min = A[i][j];
	for(int h = 0; h<m; h++)
		if(A[h][j]<min)
			return 0;
	return 1;
}
int Lon_nhat_dong(int i, int j, int n, int A[][100])
{
	int max = A[i][j];
	for(int k=0; k<n; k++)
		if(A[i][k]>max)
			return 0;
	return 1;
}
void xuat(int i, int j, int A[][100])
{
	printf("%d ", A[i][j]);
}
void nhap(int &m, int &n, int A[][100])
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &A[i][j]);
}