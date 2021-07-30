#include <stdio.h>
float tinh1PhanTu(int n);
float tinh(int n);
void nhap(int &n);
void xuat(float kq);
void main()
{
	int n;
	nhap(n);
	float kq = tinh(n);
	xuat(kq);
}
float tinh1PhanTu(int n)
{
	return 1/float(n*(n+1)/2);
}
float tinh(int n)
{
	if(n==1)
		return 1;
	return tinh(n-1) + tinh1PhanTu(n);
}
void nhap(int &n)
{
	scanf("%d%", &n);
}
void xuat(float kq)
{
	printf("%.2f", kq);
}