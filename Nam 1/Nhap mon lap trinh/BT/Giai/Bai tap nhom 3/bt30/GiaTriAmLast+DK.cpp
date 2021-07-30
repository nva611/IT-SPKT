#include <stdio.h>
void nhap(int &n, double a[], double &x);
double tim(double A[], double x, int n);
void xuat(double k);
void main()
{
	int n;
	double A[1000], x;
	nhap(n, A, x);
	double kq = tim(A, x, n);
	xuat(kq);
}
void nhap(int &n, double a[], double &x)
{
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
		scanf("%lf", &a[i]);
	scanf("%lf", &x);
}
double tim(int A[], int x, int n)
{
	for (int i = n-1; i>=0; i--)
		if(A[i] > x && A[i] < 0)
			return A[i];
	return 0;
}
void xuat(double k)
{
	printf("%lf", k);
}