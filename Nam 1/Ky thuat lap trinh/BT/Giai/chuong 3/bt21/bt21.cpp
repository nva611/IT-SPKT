#include <stdio.h>
double tinh(int n);
void xuat(double k);
void nhap(int &n);
void main()
{
	int n;
	nhap(n);
	double kq = tinh(n);
	xuat(kq);
}
double tinh(int n)
{
//	if(n==1)
//		return 2;
	double s = 1;
	for(int i=1; i<=n; i++)
	{
		s *= (1+1/double(i*i));
	}
	return s;
}
void xuat(double k)
{
	printf("%lf", k);
}
void nhap(int &n)
{
	scanf("%d", &n);
}