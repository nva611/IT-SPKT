#include <stdio.h>
#include <math.h>
void nhap(int &a, int &b, int &c);
int delta(int a,int b,int c);
int Nghiem(int a, int b, int c, float &x1, float &x2);
void xuat(int kq, float x1, float x2);
void main()
{
	int a, b, c;
	float x1, x2;
	nhap(a, b, c);
	int kq = Nghiem(a, b, c, x1, x2);
	xuat(kq, x1, x2);
}
void nhap(int &a, int &b, int &c)
{
	scanf("%d%d%d", &a, &b, &c);
}
int delta(int a,int b,int c)
{
	int delta = b*b - 4*a*c;	
	return delta;
}
int Nghiem(int a, int b, int c, float &x1, float &x2)
{
	if (a!=0)
	{
		if (delta(a,b,c)>0)
		{
			double x1 = (-b + sqrt(delta(a,b,c)))/( 2*float(a) );
			double x2 = (-b - sqrt(delta(a,b,c)))/( 2*float(a) );
			return 2;
		}
		else if (delta(a,b,c)==0)
		{
			x1 = float(-b)/(2*a);
			x2 = x1;
			return 3;
		}
		else
			return 0;
	}
	else
		if(b!=0)
		{
			x1 = float(-c)/b;
			return 1;
		}
		else
			if(c!=0)
				return 0;
			else
				return 4;
}
void xuat(int kq, float x1, float x2)
{
	if (kq==0)
		printf("Ptr vo ngiem");
	else if(kq==1)
		printf("Ptr co 1 nghiem duy nhat %.2f", x1);
	else if(kq==2)
		printf("Ptr co 2 nghinem phan biet %.2f %.2f", x1, x2);
	else if(kq==3)
		printf("Ptr co nghiem kep %.2f", x1);
	else
		printf("Ptr vo so nghiem");
}