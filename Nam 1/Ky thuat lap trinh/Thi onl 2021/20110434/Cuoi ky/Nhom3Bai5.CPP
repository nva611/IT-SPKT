#include <stdio.h>
#include <stdlib.h>
void xuat(int n);
void ma_di_tuan(int n, int x, int y);
void nhap(int &n, int &x, int &y);
int A[100][100] = {0};
int X[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int Y[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int count=0;
void main()
{
	int n, x, y;
	nhap(n, x, y);
	ma_di_tuan(n, x, y);
	printf("Khong tim duoc");
}
void xuat(int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			printf("%2d ", A[i][j]); 
		printf("\n");
	}
	printf("\n\n");
}
void ma_di_tuan(int n, int x, int y)
{
	count++;
	A[x][y] = count;
	
	for(int i=0; i<8; i++)
	{
		if(count==n*n)
		{
			xuat(n);
			exit(0);
		}
		int a = x + X[i];
		int b = y + Y[i];
		if(0<=a && a<n && 0<=b && b<n && A[a][b]==0)
			ma_di_tuan(n, a, b); 
	}
	count--;
	A[x][y] = 0;
}
void nhap(int &n, int &x, int &y)
{
	scanf("%d%d%d", &n, &x, &y);
}
