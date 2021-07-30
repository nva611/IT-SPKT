#include <stdio.h>
void nhap(float &a, float &b, float &c);
int tamgiac(float a, float b, float c);
void xuat(int kq);
void main()
{
	float a, b, c;
	nhap(a, b, c);
	int kq = tamgiac(a, b, c);
	xuat(kq);
}
void nhap(float &a, float &b, float &c)
{
	scanf("%f%f%f", &a, &b, &c);
}
int tamgiac(float a, float b, float c)
{
	if (a + b > c || b + c > a || c + a > b)
		return 1;
	else 
		return 0;
}
void xuat(int kq)
{
	if (kq == 1)
		printf("La mot tam giac");
	else 
		printf("Khong tao mot tam giac");
}