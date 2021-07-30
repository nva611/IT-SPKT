#include <stdio.h>
void nhap(int &a, int &b, int &c);
int min(int a, int b, int c);
void xuat(int k);
void main()
{
	int a, b, c;
	nhap(a, b, c);
	int kq = min(a, b, c);
	xuat(kq);
}
void nhap(int &a, int &b, int &c)
{
	scanf("%d%d%d", &a, &b, &c);
}
int min(int a, int b, int c)
{
	int m = a;
	if (b<m)
		m=b;
	if(c<m)
		m=c;
	return m;
}
void xuat(int k)
{
	printf("%d", k);
}