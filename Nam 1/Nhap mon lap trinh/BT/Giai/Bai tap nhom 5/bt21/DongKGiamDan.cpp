#include <stdio.h>
void nhap(int &m, int &n, int A[][20], int &k);
int checkGiamDan(int n, int A[][20], int k);
void xuat(int kt);
void main()
{
	int m, n, A[20][20], k;
	nhap(m, n, A, k);
	int kt = checkGiamDan(n, A, k);
	xuat(kt);
}
void nhap(int &m, int &n, int A[][20], int &k)
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &A[i][j]);
	scanf("%d", &k);
}
int checkGiamDan(int n, int A[][20], int k)
{
	for(int j=0; j<n-1; j++)
		if(A[k][j]<=A[k][j+1])
			return 0;
	return 1;
}
void xuat(int kt)
{
	printf("%d", kt);
}