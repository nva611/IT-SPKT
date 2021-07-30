#include <stdio.h>

int dem(int n);
void xuat(int k);
void nhap(int &n);

void main()
{
	int n;
	nhap(n);
	int kq = dem(n);
	xuat(kq);
}
int dem(int n)
{
	int d=1;
	int du =1;
	while(du!=0)
	{
		while(du<n)
		{
			du = du*10+1;
			d++;
		}
		du = du%n;
	}
	return d;
}
void xuat(int k)
{
	printf("%d", k);
}
void nhap(int &n)
{
	scanf("%d", &n);
}