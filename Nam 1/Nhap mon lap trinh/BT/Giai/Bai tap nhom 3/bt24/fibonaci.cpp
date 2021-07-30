#include <stdio.h>

void nhap(int &n);
int fibonaci(int k);
void xuat(int h);
void main()
{
	int n;
	nhap(n);
	int kq = fibonaci(n);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int fibonaci(int n)
{
	int f1 = 1, f2 =1;
	int t;
	if (n==1)
		xuat(f1);
	else if (n==2)
	{
		xuat(f1);
		xuat(f2);
	}
	else
	{
		xuat(f1);
		xuat(f2);
		for (int i = 3; i <= n; i++)
		{
			t = f2;
			f2 = f2 + f1;
			f1 = t;
			xuat(f2);
		}
	}
	return 0;
}

void xuat(int h)
{
	printf("%d ", h);
}
