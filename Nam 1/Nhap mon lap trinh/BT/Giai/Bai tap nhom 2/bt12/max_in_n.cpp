#include <stdio.h>
void nhap(int &n);
int check(int n);
void xuat(int kq);
void main()
{
	int n;
	nhap(n);
	int kq = check(n);
	xuat(kq);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int check(int n)
{
	int t = n%10;
	while (n > 0)
	{
		n = n/10;
		int x = n%10;
		if (t < x)
			t = x;
	}
	return t;
}
void xuat(int kq)
{
	printf("kq la: %d", kq);
}