#include <stdio.h>
void nhap(int &a, int &b, int &c, int &d);
int phansotoigian(int a, int b, int c, int d, int &x, int &y);
void xuat(int x, int y);
void main()
{
	int a, b, c, d, x, y;
	nhap(a, b, c, d);
	int kq = phansotoigian(a, b, c, d, x, y);
	xuat (x, y);
}
void nhap(int &a, int &b, int &c, int &d)
{
	scanf("%d%d%d%d", &a, &b, &c, &d);
}
int phansotoigian(int a, int b, int c, int d, int &x, int &y)
{
	x =a*d + b*c;
	y = b*d;
	for (int i = 2; i <= x*(x<=y) + y*(y<=x); i++)
		if (x%i==0 && y%i==0)
		{
			x = x/i;
			y = y/i;
		}
	return 1;
}
void xuat(int x, int y)
{
	if (y==1)
		printf("%d", x);
	printf("%d %d", x, y);
}