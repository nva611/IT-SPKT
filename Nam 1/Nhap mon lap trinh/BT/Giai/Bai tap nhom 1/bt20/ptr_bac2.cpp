#include<stdio.h>
#include<math.h>
void nhap( int &a, int &b, int &c);
int tinhthuong( int a, int b, int c, float &x, float &y);
void xuat (int gogo,float x, float y);
void main()
{
	int a,b,c;
	float x,y;
	nhap(a,b,c);
	int kq= tinhthuong(a,b,c,x,y);
	xuat(kq,x,y);
}
void nhap( int &a, int &b, int &c)
{
	scanf("%d%d%d",&a,&b,&c);
}
int tinhthuong( int a, int b, int c, float &x, float &y)
{
	int t = (b*b) - 4*a*c;
		if ( t<0)
			return 1;
	
		else if( t==0)
		{
			x = float(-b) / 2*a ;
			y = x;
			return 2;
		}
		else
		{
			double x = (float (-b) + sqrt(t)) /  (2*a) ;
			 double y =  (float(-b) - sqrt(t)) /  (2*a) ;
			return 3;
		}
}
void xuat (int gogo,float x, float y)
{
	if ( gogo==1)
		printf("phuong trinh vo nghiem ");
	else if(gogo==2)
		printf("nghiem la %f", x);
	else
		printf("hai nghiem la: %f, %f", x, y);
}