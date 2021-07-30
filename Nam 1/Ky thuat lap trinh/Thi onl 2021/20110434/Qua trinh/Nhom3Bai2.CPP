#include <stdio.h>
float tinh(int n);
void xuat(float k);
void nhap(int &n);
void main()
{
	int n;
	nhap(n);
	float kq = tinh(n);
	xuat(kq);
}
float tinh(int n)
{
	float kq = 0;
	int mau_so = 1;
	for(int i=1; i<=n; i++)
	{
		mau_so *= i;
		kq +=  1/float(mau_so);	
	}
	return kq;
}
void xuat(float k)
{
	printf("%.2f", k);
}
void nhap(int &n)
{
	scanf("%d", &n);
}