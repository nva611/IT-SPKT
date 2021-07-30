#include <stdio.h>
void nhap(int &n);
int atm(int n, int &a, int &b, int &c, int &d);
void xuat(int a, int b, int c, int d);
void main()
{
	int n, a, b, c, d;
	nhap(n);
	int kq = atm(n, a, b, c, d);
	xuat (a, b, c, d);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int atm(int n, int &a, int &b, int &c, int &d)
{
	int x = 100000, y = 50000, z = 20000, t = 10000;
	a = n/x;
	n = n%x;
	b = n/y;
	n = n%y;
	c = n/z;
	n = n%z;
	d = n/t;
	return 1;
}
void xuat(int a, int b, int c, int d)
{
	printf("100k co %d to\n50k co %d to\n20k co %d to\n10k co %d to", a, b, c, d);
}