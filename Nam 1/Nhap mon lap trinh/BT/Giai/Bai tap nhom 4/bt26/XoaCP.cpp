#include <stdio.h>
#include <math.h>
void nhap(int &a, int A[]);
int laCP(int n);
void XoaCP(int &a, int A[]);
void xuat(int a, int A[]);
void main()
{
	int a, A[100];
	nhap(a, A);
	XoaCP(a, A);
	xuat(a, A);
}
void nhap(int &a, int A[])
{
	scanf("%d", &a);
	for (int i=0;i<a;i++)
		scanf("%d", &A[i]);
}
int laCP(int n)
{
	int can_n;
	can_n = int (sqrt(n));
	if (can_n*can_n==n)
		return 1;
	return 0;
}
void XoaCP(int &a, int A[])
{
	for (int i=0; i<a; i++)
		if(laCP(A[i])==1)
		{
			for(int j=i; j<a-1;j++)
				A[j]=A[j+1];
			a--;
			i--;
		}
}
void xuat(int a, int A[])
{
	for (int i =0; i<a;i++)
		printf("%d ", A[i]);
}