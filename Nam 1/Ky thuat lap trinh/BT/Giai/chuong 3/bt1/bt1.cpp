#include <stdio.h>
int LuyThua(int x, int p);
void nhap(int &x, int &p);
void xuat(int kq);
void main()
{
	int x, p;
	nhap(x, p);
	int kq = LuyThua(x, p);
	xuat(kq);
}
void nhap(int &x, int &p)
{
	scanf("%d%d", &x, &p);
}
int LuyThua(int x, int p)
{
	if(p==0)
		return 1;
	else
	{
		int m = LuyThua(x, p/2);
		if(p%2==0)
			return m*m;
		return m*m*x;
	}
}
void xuat(int kq)
{
	printf("%d", kq);
}