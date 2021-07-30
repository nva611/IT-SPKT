#include <stdio.h>
void nhap(int &n);
void xuat(int kq);
int fibonaci(int n);
void main()
{
	int n;
	nhap(n);
	int kq = fibonaci(n);
	xuat(kq);
}
int fibonaci(int n)
{
	if(n==1 || n==2)
		return 1;
	return fibonaci(n-1) + fibonaci(n-2);
}
void xuat(int kq)
{
	printf("%d", kq);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
