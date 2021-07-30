#include <stdio.h>
void nhap(int &n, int A[]);
int TachMang(int n, int A[], int B[], int C[], int &k, int &h);
void xuat(int k, int B[], int h, int C[]);
void main()
{
	int A[100], n, B[100], C[100], k, h;
	nhap(n, A);
	int kq = TachMang(n, A, B, C, k, h);
	xuat(k, B, h, C);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
		scanf("%d", &A[i]);
}
int TachMang(int n, int A[], int B[], int C[], int &k, int &h)
{
	k = 0, h = 0;
	for (int i = 0; i<n; i++)
		if(A[i]>=0)
			B[k++]=A[i];
		else
			C[h++]=A[i];
	return 0;
}
void xuat(int k, int B[], int h, int C[])
{
	for (int i = 0; i<k;i++)
		printf("%d ", B[i]);
	printf(" \n");
	for (i = 0; i<h;i++)
		printf("%d ", C[i]);
}