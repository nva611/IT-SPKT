#include <stdio.h>
void nhap(int &n);
void xuat(int n, int A[][100]);
void YeuCau(int n, int A[][100]);
void main()
{
	int n;
	nhap(n);
	int A[100][100]={0};
	YeuCau(n, A);
	xuat(n, A);
}
void YeuCau(int n, int A[][100])
{
	//int i=0, j=0;
	int kt = 1;
	int cotMin = 0, hangMin = 0;
	int cotMax = n-1, hangMax = n-1;
	int count = 1;
	while(count <= n*n)
	{
	//	if(kt%4==1)
	//	{
			for(int i=cotMin; i<=cotMax; i++)
				A[hangMin][i] = count++;
			hangMin++;
	//		kt++;
	//	}
	//	if(kt%4==2)
	//	{
			for(i=hangMin; i<=hangMax; i++)
				A[i][cotMax] = count++;
			cotMax--;
	//		kt++;
	//	}
	//	if(kt%4==3)
	//	{
			for(i=cotMax; i>=cotMin; i--)
				A[hangMax][i] = count++;
			hangMax--;
	//		kt++;
	//	}
	//	if(kt%4==0)
	//	{
			for(i=hangMax; i>=hangMin; i--)
				A[i][cotMin] = count++;
			cotMin++;
	//		kt++;
	//	}
	}
}
void nhap(int &n)
{
	scanf("%d", &n);
}
void xuat(int n, int A[][100])
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
}