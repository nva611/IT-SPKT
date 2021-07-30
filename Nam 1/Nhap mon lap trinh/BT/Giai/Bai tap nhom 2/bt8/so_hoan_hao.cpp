#include <stdio.h>
void nhap(int &n);
int check(int n);
void xuat(int a, int n);
void main()
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
	int i, t = 0;
	for (i = 1; i < n; i++)
	{
		if (n%i==0)
			t += i;
	}
	if (t == n)
		return 1;
	else 
		return 0;
}
void xuat(int a, int n)
{ 
	
	if (a == 1)
		printf("%d la so hoan hao", n);
	else
		printf("%d khong la so hoan hao", n);
}
