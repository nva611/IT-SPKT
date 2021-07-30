#include<stdio.h>
void nhap(int &a, int &b, int &c);
int check(int &a, int &b, int &c);
void xuat(int m, int a, int b, int c);
void main()
{
	int a, b, c;
	nhap(a, b, c);
	int kt = check(a, b, c);
	xuat(kt, a, b, c);
}
void nhap(int &a, int &b, int &c)
{
	scanf("%d%d%d", &a, &b, &c);
}
int check(int &a, int &b, int &c)
{
	
	if (0 <= a && a <= 23 && 0 <= b && b <= 59 && 0 <= c && c <= 59)
	{
		if (c == 59 && b <59 && a<23)
		{
			c = 0;
			b = b + 1;
			a = a;
		}
		else if (c == 59 && b == 59 && a<23)
		{
			c = 0;
			b = 0;
			a = a + 1;
		}
		else if (c == 59 && b == 59 && a == 23)
		{
			c = 0;
			b = 0;
			a = 0;
		}
		else 
			c = c + 1;
		return 1;
	}
	else 
		return 0;
}
void xuat(int m, int a, int b, int c)
{
	if (m==1)
		printf("sau 1 giay la: %d:%d:%d", a, b, c);
	else 
		printf("KHONG HOP LE");
}