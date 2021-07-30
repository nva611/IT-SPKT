#include <stdio.h>
void nhap(int &n);
int dem_ngto(int n, int &d);
void xuat(int a, int n, int d);
void main()
{
	int n, d; 
	nhap(n);
	int kq = dem_ngto(n, d);
	xuat(kq, n, d);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int dem_ngto(int n, int &d)
{
	int i, j;
	d = 0;
	for (i=2; i < n; i++)
		for (j=2; j <= i; j++)
			if (i%j==0 && i != j)
				break;
			else
				if(j == i)
					d++;
				else
					continue;
	return d;
}
void xuat(int a, int n, int d)
{
	printf("so cac so ngto nho hon %d la: %d", n, d);
}
