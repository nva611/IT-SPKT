#include <stdio.h>
void nhap(int &n);
int dem(int n);
void xuat(int a);
void main()
{
	int n;
	nhap(n);
	int kq = dem(n);
	xuat(kq);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int dem(int n)
{
	int i, j;
	int d=0;
	for (i = 2; i < n; i++)
	{
		if (n%i==0)
		{
			for (j = 2; j <= i; j++)
			{
				if (i%j==0 && i!=j)
					break;
				else
					if (i==j)
						d++;
					else
						continue;
			}
		}
		else
			continue;
	}	
	return d;
}
void xuat(int a)
{
	printf("Kq la: %d", a);
}