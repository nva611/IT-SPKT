#include <stdio.h>
void nhap(float &a, float &b, float &c);
int tamgiac(float a, float b, float c);
int kind(float a, float b, float c);
void xuat(int m, int n);
void main()
{
	float a, b, c;
	nhap(a, b, c);
	int kt = tamgiac(a, b, c);
	int kq = kind(a, b, c);
	xuat(kt, kq);
}
void nhap(float &a, float &b, float &c)
{
	scanf("%f%f%f", &a, &b, &c);
}
int tamgiac(float a, float b, float c)
{
	if (a + b > c)
		return 1;
	else 
		return 0;
}
int kind(float a, float b, float c)
{
	if (a == b && b == c)
		return 2;
	else if ((a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) && (a == b || a == c || b == c))
		return 3;
	else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
		return 4;
	else if (a == b || a == c || b == c)
		return 5;
	else 
		return 6;
}
void xuat(int m, int n)
{
	if (m == 1)
	{
		switch(n)
		{
		case 2: printf("La tam giac deu"); break;
		case 3: printf("La tam giac vuong can"); break;
		case 4: printf("La tam giac vuong"); break;
		case 5: printf("La tam giac can"); break;
		case 6: printf("La tam giac thuong"); break;
		}
	}
	else
		printf("Khong la tam giac");
}