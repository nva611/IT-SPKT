#include <stdio.h>
void nhap(int &n);
int soNT(int n);
void xuat(int a, int n);
void main()
{
	int n;
	nhap(n);
	int kq = soNT(n);
	xuat(kq, n);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int soNT(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if(n%i==0)
			return 0;
	}
}
void xuat(int a, int n)
{
	if (a == 0)
		printf("%d khong la so nguyen to", n);
	else 
		printf("%d la so nguyen to", n);
}