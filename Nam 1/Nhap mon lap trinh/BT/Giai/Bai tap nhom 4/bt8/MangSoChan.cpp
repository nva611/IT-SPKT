#include <stdio.h>
void nhap(int &n, int A[], int &x, int &y);
void check(int n, int A[], int x, int y);
void xuat(int k);
void main()
{
	int x, y, n, A[1000];
	nhap(n, A, x, y);
	check(n, A, x, y);
}
void nhap(int &n, int A[], int &x, int &y)
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &A[i]);
	scanf("%d%d", &x, &y);
}
void check(int n, int A[], int x, int y)
{
	for(int i=0; i<n;i++)
		if(A[i]>=x && A[i]<=y && A[i]%2==0)
			xuat(A[i]);
}
void xuat(int k)
{
	printf("%d ", k);
}