#include <stdio.h>
void nhap(int &a, int &b, int &n);
int tong(int a, int b, int n);
void xuat(int z);
void main()
{
	int a, b, n;
	nhap(a, b, n);
	int kq = tong(a, b, n);
	xuat(kq);
}
void nhap(int &a, int &b, int &n)
{
	scanf("%d%d%d", &a, &b, &n);
}
int tong(int a, int b, int n)
{
	int i, t = 0;
	for (i = 1; i < n; i++)
	{
		if (i%a==0 && i%b!=0)
			t += i;
	}
	return t;
}
void xuat(int z)
{
	printf("Kq la: %d", z);
}