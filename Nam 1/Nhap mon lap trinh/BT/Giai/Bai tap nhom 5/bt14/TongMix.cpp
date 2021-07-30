#include <stdio.h>
#define MaxRow 20
#define MaxCol 20
void nhap(int &nRow, int &nCol, int A[][MaxCol]);
int TongCheoChinh(int nRow, int nCol, int A[][MaxCol]);
int TongCheoPhu(int nRow, int nCol, int A[][MaxCol]);
void xuat(int c, int d);
void main()
{
	int A[MaxRow][MaxCol], nRow, nCol;
	nhap(nRow, nCol, A);
	//int TongRow = TongDong(nRow, nCol, A, B);
	//int TongCol = TongCot(nRow, nCol, A);
	int TongCheo9 = TongCheoChinh(nRow, nCol, A);
	int TongCPhu = TongCheoPhu(nRow, nCol, A);
	xuat(TongCheo9, TongCPhu);
}
void nhap(int &nRow, int &nCol, int A[][MaxCol])
{
	scanf("%d%d", &nRow, &nCol);
	for(int i=0; i<nRow; i++)
		for(int j=0; j<nCol; j++)
			scanf("%d", &A[i][j]);
}
/*void TinhRow(int nRow, int nCol, int A[][MaxCol])
{

}*/
int TongCheoChinh(int nRow, int nCol, int A[][MaxCol])
{
	int t=0; 
	if(nRow==nCol)
	{
		
		int i=0, j=0;
		while (i<nRow)
		{
			t += A[i][j];
			i++;
			j++;
		}
	}
	return t;
}
int TongCheoPhu(int nRow, int nCol, int A[][MaxCol])
{
	int t=0;
	if(nRow==nCol)
	{
		int i=nRow-1;
		int j=0;
		
		while(j<nCol)
		{
			t += A[i][j];
			i--;
			j++;
		}
	}
	return t;
}
void xuat(int c, int d)
{
	printf("%d %d", c, d);
}