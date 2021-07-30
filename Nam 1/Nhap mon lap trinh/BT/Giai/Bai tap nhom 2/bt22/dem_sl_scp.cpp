#include <stdio.h>
void nhap(int &n);
int dem(int n);
void xuat(int a, int n);
void main()
{
	int n;
	nhap(n);
	int kq = dem(n);
	xuat(kq, n);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int dem(int n)
{
	int i, j;
	int d = 0;
	for (i = 1; i<n; i++)
	{
		for (j = 2; j<i; j++)
		{
			if (j*j==i)
			{
				d++;
				break;
			}
			else
				continue;

		}
	}
	return d;
}
void xuat(int a, int n)
{
	printf("Co %d so chinh phuong nho hon %d", a, n);
}