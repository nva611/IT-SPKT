#include <stdio.h>
double tinh_S(int n);
void xuat(double k);
void nhap(int &n);
void main()
{
	int n;
	nhap(n);
	double kq = tinh_S(n);
	xuat(kq);
}
double tinh_S(int n)
{
	double t = 0;
	int mau = 0;
	for(int i=1; i<=n; i++)
	{
		mau += i;
		t += 1/double(mau);		
	}
	return t;
}
void xuat(double k)
{
	printf("%.2lf", k);
}
void nhap(int &n)
{
	scanf("%d", &n);
}