#include <stdio.h>
void nhap(int &n);
int tong(int n);
void xuat(int a);
void main()
{
	int n;
	nhap(n);
	int kq = tong(n);
	xuat(kq);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int tong(int n)
{
	int sum = 1, i = 1;
	while (i <= n)
	{
		sum += i*i;
		i++;
	}
	return sum;
}
void xuat(int a)
{
	printf("Kq la: %d", a);
}
