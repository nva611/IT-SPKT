#include <stdio.h>
void xuat(int kq);
int tinh_F(int n);
void nhap(int &n);
void main()
{
	int n;
	nhap(n);
	int kq = tinh_F(n);
	xuat(kq);
}
void xuat(int kq)
{
	printf("%d", kq);
}
int tinh_F(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
//	int k1 = tinh_F(n/2), k2 = tinh_F(n/2+1);
	if(n%2==0)
		return tinh_F(n/2);
	else
		return tinh_F(n/2) + tinh_F(n/2+1);
}
void nhap(int &n)
{
	scanf("%d", &n);
}