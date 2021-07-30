#include <stdio.h>
void nhap(float &a, float &b);
float cv(float a, float b);
void xuat(float n);
void main()
{
	float a, b;
	nhap(a, b);
	float kq = cv(a, b);
	xuat(kq);
}
void nhap(float &a, float &b)
{
	scanf("%f%f", &a, &b);
}
float cv(float a, float b)
{ 
	float n = 2*(a+b);
	return n;
}
void xuat(float n)
{
	printf("Chu vi la: %.2f", n);
}
