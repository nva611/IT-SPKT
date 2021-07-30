#include <stdio.h>
void nhap(int &a, int &b);
int thuong(int a, int b, float &th);
void xuat(int n, float th);
void main ()
{
	int a, b;
	nhap(a, b);
	float th;
	int kq = thuong(a, b, th);
	xuat(kq, th);
}
void nhap(int &a, int &b)
{
	scanf("%d%d", &a, &b);
}
int thuong(int a, int b, float &th)
{
	if (b!=0)
	{
		th = float (a) / b;
		return 1;
	}
	else 
		return 0;
}
void xuat(int n, float th)
{
	if (n==1)
		printf("Kq la: %.2f", th);
	else
		printf("Khong chia duoc");
}