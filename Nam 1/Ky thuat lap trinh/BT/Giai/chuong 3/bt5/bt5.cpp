#include <stdio.h>
void xuat(float kq);
void nhap(int &n);
float tinh(int n);
int giaiThua(int n);
void main()
{
	int n;
	nhap(n);
	float kq = tinh(n);
	xuat(kq);
}
int giaiThua(int n)
{
	if(n==0)
		return 1;
	return n*giaiThua(n-1);
}
float tinh(int n)
{
	if(n==1)
		return 1;
	return 1/float(giaiThua(n)) + tinh(n-1);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
void xuat(float kq)
{
	printf("%f", kq);
}
