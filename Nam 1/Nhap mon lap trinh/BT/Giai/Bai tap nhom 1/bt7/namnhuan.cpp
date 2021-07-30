#include <stdio.h>
void nhap(int &y);
int NamNhuan(int y);
void xuat(int kt);
void main()
{
	int y;
	nhap(y);
	int kt = NamNhuan(y);
	xuat(kt);
}
void nhap(int &y)
{
	scanf("%d", &y);
}
int NamNhuan(int y)
{
	if(y%4!=0)
		return 0;
	else
		if(y%100!=0)
			return 1;
		else
			if(y%400==0)
				return 1;
			else
				return 0;
}
void xuat(int kt)
{
	if (kt==1)
		printf("Nam nhuan");
	else
		printf("Khong la Nam Nhuan");
}