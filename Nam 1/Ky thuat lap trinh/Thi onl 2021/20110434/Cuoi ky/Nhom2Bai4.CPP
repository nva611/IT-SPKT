#include<stdio.h>
#define MIN -9999999

void nhap(int &m, int &n, float A[][101]);
int la_diem_loi(float A[][101], int i, int j);
void tim_diem_loi_nho_nhat(int m, int n, float A[][101]);
void xuat(int i, int j);

void main()
{
	int m, n;
	float A[101][101];
	nhap(m, n, A);
	tim_diem_loi_nho_nhat(m, n, A);
}
void xuat(int i, int j)
{
	printf("%d %d", i, j);
}

void tim_diem_loi_nho_nhat(int m, int n, float A[][101])
{
	int imin = 0;
	int jmin = 0;
	float L[101][101];
	L[0][0] = 100000;
	for(int i=1; i<=m; i++)
		for(int j=1; j<=n; j++)
			if(la_diem_loi(A, i, j)==1 && A[i][j] < L[imin][jmin])
			{
				imin = i;
				jmin = j;
				L[imin][jmin] = A[i][j];
			}
	if(imin!=0)
		xuat(imin-1, jmin-1);
	else
		printf("-1");
}
int la_diem_loi(float A[][101], int i, int j)
{
	int X[4] = {-1, 0, 1, 0};
	int Y[4] = {0, 1, 0, -1};
	for(int k=0; k<4; k++)
		if(A[i+X[k]][j+Y[k]] >= A[i][j])
			return 0;
	return 1;
}
void nhap(int &m, int &n, float A[][101])
{
	for(int i=0; i<101; i++)
		for(int j=0; j<101; j++)
			A[i][j] = float(MIN);
	scanf("%d%d", &m, &n);
	for(i=1; i<m+1; i++)
		for(int j=1; j<n+1; j++)
			scanf("%f", &A[i][j]);
}
