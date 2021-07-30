#include<stdio.h>
#include <math.h>
void nhap(int &n, int A[]);
void LonAbsSoSau(int n, int A[]);
void xuat(int k);
void main()
{
	int n, A[1000];
	nhap(n, A);
	LonAbsSoSau(n, A);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for (int i=0; i<n; i++)
		scanf("%d", &A[i]);
}
void LonAbsSoSau(int n, int A[])
{
	for (int i =0; i<n; i++)
		if(A[i]>abs(A[i+1]))
			xuat(A[i]);
}
void xuat(int k)
{
	printf("%d ", k);
}