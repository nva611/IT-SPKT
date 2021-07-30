#include <stdio.h>
#include <math.h>
void nhap(unsigned int &n, double &x);
double can(unsigned int n, double x);
void xuat(double a);
void main()
{
	unsigned int n;
	double x;
	nhap(n, x);
	double kq =can(n, x);
	xuat(kq);
}
void nhap(unsigned int &n, double &x)
{
	scanf("%u%lf", &n, &x);
}
double can(unsigned int n, double x)
{
	for (unsigned int i = 1; i <= n; i++)
		x = sqrt(x);
	return x;
}
void xuat(double a)
{
	printf("%lf", a);
}