#include <stdio.h>
void nhap(int &m, int &n, int A[][20]);
bool MaxRowCol(int m, int n, int A[][20], int Row, int Col, int k);
bool MaxCheo(int m, int n, int A[][20], int Row, int Col, int k);
void hoanghau(int m, int n, int A[][20]);
void xuat(int k);
void main()
{
	int m, n, A[20][20];
	nhap(m, n, A);
	hoanghau(m, n, A);
}
void nhap(int &m, int &n, int A[][20])
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &A[i][j]);
}
bool MaxRowCol(int m, int n, int A[][20], int Row, int Col, int k) 
{
	for(int x=0; x<m; x++)
		if(A[Row][x]>=k && x!=Col)
			return false;
	for(int y=0; y<n; y++)
		if(A[y][Col]>=k && y!=Row)
			return false;
	return true;
}
bool MaxCheo(int m, int n, int A[][20], int Row, int Col, int k) 
{
	int vtr; //vtr la so de gan m hoac n co gia tri lon nhat hoac bang nhau, muc dich la su dung cho check cheo phu ben duoi
	if(m>=n)
		vtr=m;
	else
		vtr=n;
	if(Row>=Col)//cheo chinh co 2 TH o 2 vi tri khac nhau TH1 Row>=Col, TH2 Row<Col
	{
		int i=Row-Col, j=0;
		while(i<m && j<n)
		{
			if(A[i][j]>=k && i!=Row && j!=Col)
				return false;
			i++;
			j++;
		}
	}
	else
	{
		int i=0, j=Col-Row;
		while(i<m && j<n)
		{
			if(A[i][j]>=k && i!=Row && j!=Col)
				return false;
			i++;
			j++;
		}
	}
	if(Row+Col<=vtr)//cheo phu co 2 TH o 2 vi tri khac nhau TH1 Row+Col<=vtr, TH2 Row+Col>vtr
	{
		int j=Row+Col;
		int i=0;
		while(i<m && j<n)
		{
			if(A[i][j]>=k && i!=Row && j!=Col)
				return false;
			i++;
			j--;
		}
	}
	else
	{
		int j=vtr-1;
		int i=Row+Col-vtr+1;
		while(i<m && j<n)
		{
			if(A[i][j]>=k && i!=Row && j!=Col)
				return false;
			i++;
			j--;
		}
	}
	return true;
}
void hoanghau(int m, int n, int A[][20])
{
	int dem=0;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			if(MaxRowCol(m, n, A, i, j, A[i][j])==true && MaxCheo(m, n, A, i, j, A[i][j])==true)
				dem++;
	xuat(dem);
}
void xuat(int k)
{
	printf("%d ", k);
}