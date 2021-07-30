#include <stdio.h>
#define MaxRow 20
#define MaxCol 20
void nhap(int &nRow, int &nCol, int A[][MaxCol], int B[][MaxCol]);
void TongMaTran(int nRow, int nCol, int A[][MaxCol], int B[][MaxCol]);
void xuat(int nRow, int nCol, int A[][MaxCol]);
void main()
{
	int A[MaxRow][MaxCol], B[MaxRow][MaxCol], nRow, nCol;
	nhap(nRow, nCol, A, B);
	TongMaTran(nRow, nCol, A, B);
	xuat(nRow, nCol, A);
}
void nhap(int &nRow, int &nCol, int A[][MaxCol], int B[][MaxCol])
{
	scanf("%d%d", &nRow, &nCol);
	for(int i=0; i<nRow; i++)
		for(int j=0; j<nCol; j++)
			scanf("%d", &A[i][j]);
	for(i=0; i<nRow; i++)
		for(int k=0; k<nCol; k++)
			scanf("%d", &B[i][k]);
}
void TongMaTran(int nRow, int nCol, int A[][MaxCol], int B[][MaxCol])
{
	for(int i=0; i<nRow; i++)
		for(int j=0; j<nCol; j++)
			A[i][j] += B[i][j];
}
void xuat(int nRow, int nCol, int A[][MaxCol])
{
	for(int i=0; i<nRow; i++)
	{
		for(int j=0; j<nCol; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
}
