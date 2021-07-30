#include <stdio.h>
#include <math.h>
void nhap(float &a);
int Nguyen(float a);
void xuat(int k);
void main()
{
	float a;
	nhap(a);
	int kq = Nguyen(a);
	xuat(kq);
}
void nhap(float &a)
{
	scanf("%f", &a);
}
int Nguyen(float a)
{
	int b;
	if(a>=0)
		b = floor(float(a));
	else
		b = floor(float(a));
	return b;
}
void xuat(int k)
{
	printf("%d", k);
}
