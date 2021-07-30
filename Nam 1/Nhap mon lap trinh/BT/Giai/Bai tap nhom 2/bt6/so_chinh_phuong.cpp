

#include <stdio.h>
void nhap(int &n);
int check(int n);
void xuat(int a, int n);
void main ()
{
	int n;
	nhap(n);
	int kq = check(n);
	xuat(kq, n);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int check(int n)
{
	int i;
	for (i =1; i < n; i++)
	{
		if (i*i == n)
		{
			break;
		}
		else
			continue;
	}
	if (i==n)
		return 0;
	else
		return 1;
}
void xuat(int a, int n)
{
	if (a==1)
		printf("%d la so chinh phuong", n);
	else
		printf("%d khong la so chinh phuong" ,n);
}

