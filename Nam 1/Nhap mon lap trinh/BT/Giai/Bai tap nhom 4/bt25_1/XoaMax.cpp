#include <stdio.h>
void nhap(int &n, int A[]);
int max(int n, int A[]);
int check(int &n, int A[], int kt);
void xuat(int n, int A[]);
void main()
{
	int n, A[100];
	nhap(n, A);
	int kt = max(n, A);
	int kq = check(n, A, kt);
	xuat(n, A);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for (int i=0; i<n;i++)
		scanf("%d", &A[i]);
}
int max(int n, int A[])
{
	int m = A[0];
	for (int i =1; i<n;i++)
		if(m<A[i])
			m=A[i];
	return m;
}
int check(int &n, int A[], int kt)
{
	for(int i=0;i<n;i++)
		if(A[i]==kt)
		{
			for(int j=i; j<n-1; j++)
				A[j] = A[j+1];
			n--;
			i--;
		}
	return n;
}
void xuat(int n, int A[])
{
	for(int i=0; i<n; i++)
	{
		printf("%d ", A[i]);
	}
}