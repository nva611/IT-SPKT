#include <stdio.h>
void nhap(int &nRow, int &nCol, int A[][20]);
void SapXepC9(int nRow, int nCol, int A[][20]);
void xuat(int nRow, int nCol, int A[][20]);
void main()
{
	int nRow, nCol, A[20][20];
	nhap(nRow, nCol, A);
	SapXepC9(nRow, nCol, A);
	xuat(nRow, nCol, A);
}
void nhap(int &nRow, int &nCol, int A[][20])
{
	scanf("%d%d", &nRow, &nCol);
	for(int i=0; i<nRow; i++)
		for(int j=0; j<nCol; j++)
			scanf("%d", &A[i][j]);
}
void SapXepC9(int nRow, int nCol, int A[][20])
{
	int i=1;
	int j=1;
	if(nRow==nCol)
	{
		while(i<nRow)
		{
			int t =A[i][j];
			int a = i-1;
			int b = a;
			while(a>=0 && t<A[a][b])
			{
				A[a+1][b+1]=A[a][b];
				a--;
				b--;
			}
			A[a+1][b+1]=t;
			i++;
			j++;
		}
	}
}
void xuat(int nRow, int nCol, int A[][20])
{
	for(int i=0; i<nRow;i++)
	{
		for(int j=0; j<nCol; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
}