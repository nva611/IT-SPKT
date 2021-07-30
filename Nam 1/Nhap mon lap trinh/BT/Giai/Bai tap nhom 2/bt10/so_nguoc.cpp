#include <stdio.h>
void nhap(int &n);
int sodaonguoc(int n);
void xuat(int z);
void main()
{
	int n;
	nhap(n);
	int kq = sodaonguoc(n);
	xuat(kq);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int sodaonguoc(int n)
{
	int m = 0;
	while (n >0)
	{
		int t = n%10;
		n = n/10;
		m = 10*m + t;
	}
	return m;
}
void xuat(int z)
{
	printf("Gia tri dao nguoc la: %d", z);
}