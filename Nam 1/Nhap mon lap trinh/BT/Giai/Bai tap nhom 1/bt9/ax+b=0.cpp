#include <stdio.h>
void nhap(int &a, int &b);
int Nghiem(int a, int b, float &th);
void xuat(int k, float th);
void main()
{
	int a, b;
	float th;
	nhap(a, b);
	int kq = Nghiem(a, b, th);
	xuat(kq, th);
}
void nhap(int &a, int &b)
{
	scanf("%d%d", &a, &b);
}
int Nghiem(int a, int b, float &th)
{
	if (a!=0)
	{
		th = float(-b)/a;
		return 1;
	}
	else
		if (b==0)
			return 2;
		else
			return 0;
}
void xuat(int k, float th)
{
	if (k==0)
		printf("Vo nghiem");
	else if (k==1)
		printf("%.2f", th);
	else 
		printf("Ptr vo so nghiem");
}