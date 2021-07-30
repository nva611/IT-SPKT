#include <stdio.h>
void nhap(int &a, int &b);
int tohop(int a, int b);
int luythua(int n);
void xuat(int kq);
void main()
{
	int a, b;
	nhap(a, b);
	int kq = tohop(a, b);
	xuat(kq);
}
void nhap(int &a, int &b)
{
	scanf("%d%d", &a, &b);
}
int luythua(int n)
{
	int t = 1;
	for (int i = 1; i <= n; i++)
		t *= i;
	return t;
}
int tohop(int a, int b)
{
	int k;
	k = luythua(b)/(luythua(a)*luythua(b-a));
	return k;
}
void xuat(int kq)
{
	printf("%d", kq);
}