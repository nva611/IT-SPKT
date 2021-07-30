#include <stdio.h>
const N = 5;
void nhap(double a[]);
double soam(double n);
double maxam(double a[]);
void xuat(double k);
void main()
{
	double a[N];
	nhap(a);
	double kt = maxam(a);
	xuat(kt);
}
void nhap(double a[])
{
	for (int i = 0; i < N; i++)
		scanf("%lf", &a[i]);
}
double soam(double n)
{
	if (n < 0)
		return 1;
	return 0;
}
double maxam(double a[])
{
	double t;
	for (int i = 0; i < N; i++)
		if (soam(a[i])==1)
		{
			t = a[i];
			break;
		}
	if(i==N)
		return 0;
	for (int j = i; j < N; j++)
		if (soam(a[j])==1 && a[j]>t)
			t = a[j];
	return t;
}
void xuat(double k)
{
	printf("%lf", k);
}