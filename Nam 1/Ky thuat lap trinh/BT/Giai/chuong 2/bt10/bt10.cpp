#include <stdio.h>
int Time[13] = {31 , 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
void nhap(int &d, int &m, int &y);
int checkTime(int d, int m, int y);
int laNamNhuan(int n);
void ngayTiepTheo(int &d, int &m, int &y);
void xuat(int d, int m, int y);
void main()
{
	int d, m, y;
	nhap(d, m, y);
	if(checkTime(d, m, y)==1)
	{
		ngayTiepTheo(d, m, y);
		xuat(d, m, y);
	}
	else
		printf("Khong hop le");
}
void nhap(int &d, int &m, int &y)
{
	scanf("%d%d%d", &d, &m, &y);
}
int checkTime(int d, int m, int y)
{
	
	if(y<=0 || m<0 || m>12 || d<1)
		return 0;
	if(laNamNhuan(y)==1)
		Time[2]++;
	if(d>Time[m])
		return 0;
	return 1;
}
int laNamNhuan(int n)
{
	if((n%4==0 && n%100!=0) || (n%400==0))
		return 1;
	return 0;
}
void ngayTiepTheo(int &d, int &m, int &y)
{
	if(laNamNhuan(y)==1)
		Time[2]++;
	d++;
	if(d>Time[m])
	{
		d=d%Time[m];
		m++;
	}
	if(m>12)
	{
		m=1;
		y++;
	}
}
void xuat(int d, int m, int y)
{
	printf("%d %d %d", d, m, y);
}