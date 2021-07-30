#include <stdio.h>
void nhap(int &n, double A[]);
int check(int n, double A[]);
void xuat(int kt);
void main()
{
	int n;
	double A[100];
	nhap(n, A);
	int kt = check(n, A);
	xuat(kt);
}
void nhap(int &n, double A[])
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%lf", &A[i]);
}
int check(int n, double A[])
{
	int j=n-1;
	for(int i=0; i<n/2; i++)
		if(A[i]==A[j])
			j--;
		else
			return 0;
	return 1;
}
void xuat(int kt)
{
	printf("%d", kt);
}
