#include <stdio.h>
void nhap(int &a, int &b);
int Thuong(int a, int b, float &th);
void xuat(int k, float th);
void main()
{
	int a, b;
	float th;
	nhap(a, b);
	int kq = Thuong(a, b, th);
	xuat(kq, th);
}
void nhap(int &a, int &b)
{
	scanf("%d%d", &a, &b);
}
int Thuong(int a, int b, float &th)
{
	if (b!=0)
	{
		th = float(a)/b;
		return 1;
	}
	return 0;
}
void xuat(int k, float th)
{
	if (k==1)
		printf("%.2f", th);
	else
		printf("Khong chia duoc");
}