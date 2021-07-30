#include <stdio.h>
void nhap(int &n);
int fibo(int n);
void xuat(int a);
void main()
{
	int n;
	nhap(n);
	int kq = fibo(n);
	xuat(kq);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int fibo(int n)
{
	int a1 = 1; 
	int a2 = 1;
	int c, i;
	for (i = 3; i <= n; i++)
	{
		c = a2;
		a2 = a1 + c;
		a1 = c;
	}
	return a2;
}
void xuat(int a)
{
	printf("kq la: %d", a);
}