#include <stdio.h>
void nhap(int &n, int A[]);
int check(int n, int A[]);
void xuat(int k);
void main()
{
	int n, A[100];
	nhap(n, A);
	int kt = check(n, A);
	xuat(kt);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for (int i =0; i<n; i++)
		scanf("%d", &A[i]);
}
int check(int n, int A[])
{
	for (int i =0; i<n; i++)
		if(A[i]%2==1)
			return 0;
	return 1;
}
void xuat(int k)
{
	printf("%d", k);
}

