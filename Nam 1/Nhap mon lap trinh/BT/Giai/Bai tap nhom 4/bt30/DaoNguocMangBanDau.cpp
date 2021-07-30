#include <stdio.h>
void nhap(int &a, int A[]);
void DaoViTri(int &x, int &y);
void DaoMang(int a, int A[]);
void xuat(int a, int A[]);
void main()
{
	int a, A[100];
	nhap(a, A);
	DaoMang(a, A);
	xuat(a, A);
}
void nhap(int &a, int A[])
{
	scanf("%d", &a);
	for (int i=0; i<a; i++)
		scanf("%d", &A[i]);
}
void DaoViTri(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
void DaoMang(int a, int A[])
{
	for (int i=0; i< a/2; i++)
		DaoViTri(A[i], A[a-1-i]);
}
void xuat(int a, int A[])
{
	for (int i=0; i<a; i++)
		printf("%d ", A[i]);
}