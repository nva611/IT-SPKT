#include <stdio.h>
#define N 5
void nhap(int a[]);
double tbc(int a[]);
void xuat(double k);
void main()
{
	int a[N];
	nhap(a);
	double kq = tbc(a);
	xuat(kq);
}
void nhap(int a[])
{
	for (int i= 0; i < N; i++)
		scanf("%d", &a[i]);
}
double tbc(int a[])
{
	double t = 0;
	for (int i = 0; i < N; i++)
		t += a[i];
	t = t/N;
	return t;
}
void xuat(double k)
{
	printf("%.2lf", k);
}