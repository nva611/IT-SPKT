#include <stdio.h>
void nhap(int &n);
float tong(int n);
void xuat(float kq);
void main()
{
	int n;
	nhap(n);
	float kq = tong(n);
	xuat(kq);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
float tong(int n)
{
	float s = 1, i = 2;
	while (i <= n)
	{
		s += 1/i;
		i++;
	}

	return s;
}
void xuat(float kq)
{
	printf("Kq la: %f", kq);
}