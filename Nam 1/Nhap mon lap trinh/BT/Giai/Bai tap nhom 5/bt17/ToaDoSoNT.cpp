#include <stdio.h>
#include <math.h>
void nhap(int &nRow, int &nCol, int A[][20]);
int laNT(int n);
void ToaDoNTDauTien(int nRow, int nCol, int A[][20]);
void xuat(int i, int j);
void main()
{
	int nRow, nCol, A[20][20];
	nhap(nRow, nCol, A);
	ToaDoNTDauTien(nRow, nCol, A);
}
void nhap(int &nRow, int &nCol, int A[][20])
{
	scanf("%d%d", &nRow, &nCol);
	for(int i=0; i<nRow; i++)
		for(int j=0; j<nCol; j++)
			scanf("%d", &A[i][j]);
}
int laNT(int n)
{
	int dem =2 ;
	if(n>1)
	{
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0)
			dem++;
	if(dem==2)
		return 1;
	}
	return 0;
}
void ToaDoNTDauTien(int nRow, int nCol, int A[][20])
{
	for(int i=0; i<nRow; i++)
	{
		for(int j=0; j<nCol; j++)
			if(laNT(A[i][j])==1)
			{
				xuat(i, j);
				break;
			}
		if(j!=nCol)
			break;
	}
}
void xuat(int i, int j)
{
	printf("%d %d", i, j);
}
