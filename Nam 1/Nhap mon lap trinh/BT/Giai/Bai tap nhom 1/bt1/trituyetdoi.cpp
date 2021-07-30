#include <stdio.h>
#include <math.h>
void nhap(int &n);
int tinh(int n, int x);
void xuat (int x);
void main ()
{
	int n, x;
	nhap(n);
	int kq = tinh(n, x);
	xuat(kq);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int tinh(int n, int x)
{
    x = abs (n);
	return x;
}
void xuat (int x)
{
	printf ("Kqua la: %d", x);
}