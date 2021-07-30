#include <stdio.h>
void nhap(int A[], int &n);
void nhapVtriVaGiaTri(int &i, int &x);
int yeucau(int &a);
int chen(int A[], int &n, int i, int x);
int xoa(int A[], int n, int i);
void xuat(int A[], int n);
void main()
{
	int A[100], n, i, x, a;
	nhap(A, n);
	nhapVtriVaGiaTri(i, x);
	int kq = yeucau(a);
	if(kq==1)
		chen(A, n, i, x);
	else
		xoa(A, n, i);
	xuat(A, n);
}
void nhap(int A[], int &n)
{
	scanf("%d", &n);
	for (int k =0;k<n;k++)
		scanf("%d", &A[k]);
}
void nhapVtriVaGiaTri(int &i, int &x)
{
	scanf("%d%d", &i, &x);
	i = i-1;
}
int yeucau(int &a)
{
	printf("Chen nhan 1   Xoa nhan 2");
	scanf("%d", &a);
	return a;
}
int chen(int A[], int &n, int i, int x)
{
	printf("%d", n);
	for (int k = n; k>i; k--)
		A[k] = A[k-1];
	A[i]=x;
	n++ ;
	printf("%d", n);
	return 0;
}
int xoa(int A[], int n, int i)
{
	n--;
	for (int k = i; k<n; k++)
		A[k]=A[k+1];
	return 0;
}
void xuat(int A[], int n)
{
	for (int k =0; k<n;k++)
		printf("%d ", A[k]);
	printf("%d", n);
}
