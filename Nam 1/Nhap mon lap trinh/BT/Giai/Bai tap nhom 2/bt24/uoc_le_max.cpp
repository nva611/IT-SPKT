#include <stdio.h>
void nhap(int &n);
int uoc(int n);
void xuat(int a);
void main()
{
	int n;
	nhap(n);
	int kq = uoc(n);
	xuat(kq);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int uoc(int n)
{
	int i, t;
	for (i = 1; i <= n; i += 2)
	{
		if (n%i==0)
			t = i;
		else
			continue;
	}
	return t;
}
void xuat(int a)
{
	printf("uoc le lon nhat la: %d", a);
}
	