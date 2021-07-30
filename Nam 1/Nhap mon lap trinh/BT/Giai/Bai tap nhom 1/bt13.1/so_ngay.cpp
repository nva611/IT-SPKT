#include <stdio.h>
void nhap(int &m, int &y);
int nhuan(int y);
int ngay(int t, int m, int &d);
void xuat( int h);
void main()
{
	int m, y, d;
	nhap(m, y);
	int t = nhuan(y);
	int kt = ngay(t, m, d);
	xuat(kt);
}
void nhap(int &m, int &y)
{
	scanf("%d%d", &m, &y);
}
int nhuan(int y)
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
int ngay(int t, int m, int &d)
{
	/*if (t==1)
	{
		switch(m)
		{
		case 1: d = 31; break;
		case 2: d = 29; break;
		case 3: d = 31; break;
		case 4: d = 30; break;
		case 5: d = 31; break;
		case 6: d = 30; break;
		case 7: d = 31; break;
		case 8: d = 31; break;
		case 9: d = 30; break;
		case 10: d = 31; break;
		case 11: d = 30; break;
		case 12: d = 31; break;
		}
	}
	else
	{
		switch(m)
		{
		case 1: d = 31; break;
		case 2: d = 28; break;
		case 3: d = 31; break;
		case 4: d = 30; break;
		case 5: d = 31; break;
		case 6: d = 30; break;
		case 7: d = 31; break;
		case 8: d = 31; break;
		case 9: d = 30; break;
		case 10: d = 31; break;
		case 11: d = 30; break;
		case 12: d = 31; break;
		}
	}*/
	if(m==2)
		if(t==1)
			return 29;
		else
			return 28;
	if((m<8 && m%2==1)||(m>=8 && m%2==0))
		return 31;
	if((m<8 && m%2==0)||(m>8 && m%2==1))
		return 30;
	return d;
}
void xuat( int h)
{
	printf("Co %d ngay", h);
}