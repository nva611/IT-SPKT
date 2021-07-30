#include <stdio.h>
void nhap(int &n);
int check(int n);
void xuat(int a);
void main()
{
	int n;
	nhap(n);
	int kq = check(n);
	xuat(kq);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int check(int n)
{
	int m = n%10;
	n = n/10;
	int t = n%10;
	if (m>t)
	{
			while (n>0)
		{
			if (m>t)
				m = t;
			else if (m<t)
			{
				return 0;
				break;
			}
			else
			{
				return 0;
				break;
			}
			n = n/10;
			t = n%10;
		}
		if (t==0)
			return 1;
	}
	else if (m<t)
	{
			while (n>0)
		{
			if (m<t)
				m = t;
			else if (m>t)
			{
				return 0;
				break;
			}
			else
			{
				return 0;
				break;
			}
			n = n/10;
			t = n%10;
		}
		if (t==0)
			return 2;
	}
	else 
		return 0;
}
void xuat(int a)
{
	if (a==1)
		printf("Cac chu so tang dan");
	else if (a==2)
		printf("Cac chu so giam dan");
	else
		printf("Cac chu so khong tang khong giam");
}
