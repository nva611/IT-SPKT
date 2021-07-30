#include <stdio.h>
#define MaxRow 20
#define MaxCol 20
void nhap(int A[][MaxCol], int &nRow, int &nCol);
int TongPtu(int A[][MaxCol], int nRow, int nCol);
void xuat(int kq);
void main()
{
	int A[MaxRow][MaxCol], nRow, nCol;
	nhap(A, nRow, nCol);
	int kq = TongPtu(A, nRow, nCol);
	xuat(kq);
}
void nhap(int A[][MaxCol], int &nRow, int &nCol)
{
	scanf("%d%d", &nRow, &nCol);
	for(int i=0; i<nRow; i++)
		for(int j=0; j<nCol; j++)
			scanf("%d", &A[i][j]);
}
int TongPtu(int A[][MaxCol], int nRow, int nCol)
{
	int t =0;
	for(int i=0; i<nRow; i++)
		for(int j=0; j<nCol; j++)
			t += A[i][j];
	return t;
}
void xuat(int kq)
{
	printf("%d", kq);
}