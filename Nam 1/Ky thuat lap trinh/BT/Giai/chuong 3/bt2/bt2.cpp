#include <stdio.h>
int tinhTongCapSoCong(int n);
int tinhTong(int n);
void nhap(int &n);
void xuat(int kq);
void main()
{
	int n;
	nhap(n);
	int kq = tinhTong(n);
	xuat(kq);
}
int tinhTongCapSoCong(int n)
{
	return n*(n+1)/2;
}
int tinhTong(int n)
{
	if(n==1)
		return 1;
	return tinhTong(n-1) + tinhTongCapSoCong(n);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
void xuat(int kq)
{
	printf("%d", kq);
}