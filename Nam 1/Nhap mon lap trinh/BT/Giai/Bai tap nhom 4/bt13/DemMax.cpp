#include <stdio.h>
void nhap(int &n, int A[]);
int max(int n, int A[]);
int DemMax(int n, int A[], int x);
void xuat(int k);
void main()
{
	int n, A[1000];
	nhap(n, A);
	int x = max(n, A);
	int kq = DemMax(n, A, x);
	xuat(kq);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
		scanf("%d", &A[i]);
}
int max(int n, int A[])
{
	int m = A[0];
	for (int i = 1; i<n;i++)
		if(A[i]>m)
			m =A[i];
	return m;
}
int DemMax(int n, int A[], int x)
{
	int d = 0;
	for (int i = 0; i<n; i++)
		if(A[i]==x)
			d++;
	return d;
}
void xuat(int k)
{
	printf("%d", k);
}
