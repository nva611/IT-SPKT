#include <stdio.h>
void nhap(int &n, int A[]);
int max(int n, int A[]);
void xuat(int k);
void main()
{
	int n, A[100];
	nhap(n, A);
	int kq = max(n, A);
	xuat(kq);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &A[i]);
}
int max(int n, int A[])
{
	int m = A[0];
	for (int i = 1; i < n; i++)
		if (m < A[i])
			m = A[i];
	return m;
}
void xuat(int k)
{
	printf("%d", k);
}