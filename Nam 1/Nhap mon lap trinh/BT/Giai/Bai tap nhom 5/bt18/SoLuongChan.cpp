#include <stdio.h>
void nhap(int &m, int &n, int A[][20]);
int DemSoChan(int m, int n, int A[][20]);
void xuat(int kq);
void main()
{
	int m, n, A[20][20];
	nhap(m, n, A);
	int kq = DemSoChan(m, n, A);
	xuat(kq);
}
void nhap(int &m, int &n, int A[][20])
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &A[i][j]);
}
int DemSoChan(int m, int n, int A[][20])
{
	int dem=0;
	for(int j=0; j<n; j++)
	{
		if(A[0][j]%2==0 && A[0][j]!=0)
			dem++;
		if(A[m-1][j]%2==0 && A[m-1][j]!=0)
			dem++;
	}
	for(int i=1; i<m-1; i++)
	{
		if(A[i][0]%2==0 && A[i][0]!=0)
			dem++;
		if(A[i][n-1]%2==0 && A[i][n-1]!=0)
			dem++;
	}
	return dem;
}
void xuat(int kq)
{
	printf("%d", kq);
}