#include <stdio.h>
void nhap(int &n);
int tonglt(int n);
void xuat(int a);
void main()
{
	int n;
	nhap(n);
	int kq = tonglt(n);
	xuat(kq);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int tonglt(int n)
{
	int j, lt = 0, s = 1;
	
		for (j = 1; j <= n; j++)
		{
			s *= j;
			lt += s;
		}
	
	return lt;
}
void xuat(int a)
{
	printf("Kq la: %d", a);
}