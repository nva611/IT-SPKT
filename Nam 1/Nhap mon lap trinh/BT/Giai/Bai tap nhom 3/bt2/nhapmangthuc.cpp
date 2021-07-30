#include <stdio.h>
#define N 5
void nhap(double a[]);
double tong(double a[]);
void xuat (double a[]);
void main()
{
	double a[N];
	nhap(a);
	double kq = tong(a);
	xuat(a);
}
void nhap(double a[])
{
	for (int i = 0; i < N; i++)
		scanf("%lf", &a[i]);
}
double tong(double a[])
{
	double t=0;
	for(int i=0; i<N; i++)
		t += a[i];
	return t;
}
void xuat (double kq)
{
	printf("%.2lf", kq);
}