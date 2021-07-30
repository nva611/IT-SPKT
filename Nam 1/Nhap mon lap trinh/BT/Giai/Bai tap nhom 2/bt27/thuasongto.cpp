#include <stdio.h>
void nhap(int &n);
int ngto(int n);
void xuat(int x, int y);
void main()
{
	int n;
	nhap(n);
	int kq = ngto(n);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int ngto(int n)
{
	int i=2;
	while (n>1)
	{
		int m = 0;
		while (n%i==0 && n > 1)
		{
			n = n/i;
			m++;
		}
		if(m!=0)
			xuat(i,m);
		i++;
		
	}
	return 1;
}
void xuat(int x, int y)
{
	printf("%d mu %d\n", x, y);
}
