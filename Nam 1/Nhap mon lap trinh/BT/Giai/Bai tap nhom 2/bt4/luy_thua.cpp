#include <stdio.h>
void nhap(int &n);
int luythua(int n);
void xuat(int a);
void main()
{
	int n;
	nhap(n);
	int kq = luythua(n);
	xuat(kq);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int luythua(int n)
{
	int s = 1, i =1;
	for (;i <= n; i++)
		s *= i;
	return s;	
}
void xuat(int a)
{
	printf("Kq la: %d", a);
}