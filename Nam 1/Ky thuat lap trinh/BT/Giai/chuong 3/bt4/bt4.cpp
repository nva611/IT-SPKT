#include <stdio.h>
int giaiThua(int n);
int tinh(int n);
void nhap(int &n);
void xuat(int kq);
void main()
{
	int n;
	nhap(n);
	int kq = tinh(n);
	xuat(kq);
}
int giaiThua(int n)
{
	if(n==1)
		return 1;
	return n*giaiThua(n-1);
}
int tinh(int n)
{
	if(n==1)
		return 1;
	return tinh(n-1) + giaiThua(n);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
void xuat(int kq)
{
	printf("%d", kq);
}
