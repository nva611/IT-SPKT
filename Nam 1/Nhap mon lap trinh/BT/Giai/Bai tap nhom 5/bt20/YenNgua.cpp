#include <stdio.h>
void nhap(int &m, int &n, int A[][20]);
bool MaxRow(int n, int A[][20], int Row, int Col, int k);
bool MinCol(int m, int A[][20], int Row, int Col, int k);
int YenNgua(int m, int n, int A[][20]);
void xuat(int kq);
void main()
{
	int m, n, A[20][20];
	nhap(m, n, A);
	int kq = YenNgua(m, n, A);
	xuat(kq);
}
void nhap(int &m, int &n, int A[][20])
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &A[i][j]);
}
bool MaxRow(int n, int A[][20], int Row, int Col, int k)
{
	for(int j=0; j<n; j++)
		if(A[Row][j]>=k && j!=Col)
			return false;
	return true;
}
bool MinCol(int m, int A[][20], int Row, int Col, int k)
{
	for(int i=0; i<m; i++)
		if(A[i][Col]<=k && i!=Row)
			return false;
	return true;
}
int YenNgua(int m, int n, int A[][20])
{
	int dem=0;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			if(MaxRow(n, A, i, j, A[i][j])==true && MinCol(m, A, i, j, A[i][j])==true)
				dem++;
	return dem;
}
void xuat(int kq)
{
	printf("%d", kq);
}
