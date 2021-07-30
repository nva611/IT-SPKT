#include <stdio.h>
void nhap (int &a, int &b);
int tong(int a, int b);
void xuat(int t);
void main ()
{
	int a, b;
	nhap(a, b);
	int kq = tong(a, b);
	xuat (kq);
}
void nhap (int &a, int &b)
{
	scanf("%d%d", &a, &b);
}
int tong(int a, int b)
{
	int t = a + b;
	return t;
}
void xuat(int t)
{
	printf("Kq la: %d", t);
}