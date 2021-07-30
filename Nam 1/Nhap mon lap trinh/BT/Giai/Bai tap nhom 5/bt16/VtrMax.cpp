#include <stdio.h>
void nhap(int &nRow, int &nCol, int A[][20]);
int Max(int nRow, int nCol, int A[][20]);
void VtrMax(int nRow, int nCol, int A[][20]);
void xuat(int i, int j);
void main()
{
	int nRow, nCol, A[20][20];
	nhap(nRow, nCol, A);
	VtrMax(nRow, nCol, A);
}
void nhap(int &nRow, int &nCol, int A[][20])
{
	scanf("%d%d", &nRow, &nCol);
	for(int i=0; i<nRow;i++)
		for(int j=0; j<nCol; j++)
			scanf("%d", &A[i][j]);
}
int Max(int nRow, int nCol, int A[][20])
{
	int t=A[0][0];
	for(int i=0; i<nRow; i++)
		for(int j=0; j< nCol; j++)
			if(A[i][j]>t)
				t=A[i][j];
	return t;
}
void VtrMax(int nRow, int nCol, int A[][20])
{
	for(int i=0; i<nRow; i++)
		for(int j=0; j<nCol; j++)
			if(A[i][j]==Max(nRow, nCol, A))
				xuat(i, j);
}
void xuat(int i, int j)
{
	printf("%d %d\n", i, j);
}