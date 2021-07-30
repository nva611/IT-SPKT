#include <stdio.h>
#define N 5
void nhap(double a[]);
double max(double a[]);
double min(double a[]);
void xuat(double x, double y);
void main()
{
	double a[N];
	nhap(a);
	double x = max(a);
	double y = min(a);
	xuat(x, y);
}
void nhap(double a[])
{
	for (int i = 0; i < N; i++)
		scanf("%lf", &a[i]);
}
double max(double a[])
{
	double t = a[0];
	for (int i = 1; i < N; i++)
		if (a[i]>t)
			t = a[i];
	return t;
}
double min(double a[])
{
	double t = a[0];
	for (int i = 1; i < N; i++)
		if (a[i]<t)
			t = a[i];
	return t;
}
void xuat(double x, double y)
{
	printf("%.2lf   %.2lf", y, x);
}