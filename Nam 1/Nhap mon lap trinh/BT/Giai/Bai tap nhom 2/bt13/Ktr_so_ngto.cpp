#include <stdio.h>
void nhap(int &n);
int ngto(int n);
void xuat(int a, int n);
void main()
{
	int n;
	nhap(n);
	int kq = ngto(n);
	xuat(kq, n);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int ngto(int n)
{
	int d = 0;
	while (n>0)
	{
		int m = n%10;
		switch(m)
		{
		case 1: case 2: case 3: case 5: case 7: d++; break;
			default: break;
		}
		n = n/10;
	}
	return d;
}
void xuat(int a, int n)
{
	printf("Co %d so ngto trong %d", a, n);
}
