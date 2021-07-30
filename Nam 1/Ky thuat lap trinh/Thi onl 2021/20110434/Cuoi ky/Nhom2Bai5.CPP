#include <stdio.h>
int do_so_min(int i, int j, int A[][100]);
void tao_map_tro_choi(int m, int n, int A[][100], int B[][100]);
void xuat(int m, int n, int B[][100]);
void nhap(int &m, int &n, int A[][100]);

void main()
{
	int m, n;
	int A[100][100] = {0};
	int B[100][100] = {0};
	nhap(m, n, A);
	tao_map_tro_choi(m, n, A, B);
	printf("\n");
	xuat(m, n, B);
}
int do_so_min(int i, int j, int A[][100])
{
	int dem=0;
	int X[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
	int Y[8] = {0, 1, 1, 1, 0, -1, -1, -1};
	for(int k=0; k<8; k++)
		if(A[i + X[k]][j + Y[k]]==1)
			dem++;
	return dem;	
}
void tao_map_tro_choi(int m, int n, int A[][100], int B[][100])
{
	for(int i=1; i<=m; i++)
		for(int j=1; j<=n; j++)
			if(A[i][j]==1)
				B[i][j] = 9;
			else
				B[i][j] = do_so_min(i, j, A);
}
void xuat(int m, int n, int B[][100])
{
	for(int i=1; i<=m; i++)
	{
		for(int j=1; j<=n; j++)
			printf("%d ", B[i][j]);
		printf("\n");
	}
}
void nhap(int &m, int &n, int A[][100])
{
	scanf("%d%d", &m, &n);
	for(int i=1; i<=m; i++)
		for(int j=1; j<=n; j++)
			scanf("%d", &A[i][j]);
	for(i=0; i<m; i++)
	{
		A[i][0] = -1;
		A[i][m+1] = -1;
	}
	for(i=0; i<n; i++)
	{
		A[0][i] = -1;
		A[n+1][i] = -1;
	}
}