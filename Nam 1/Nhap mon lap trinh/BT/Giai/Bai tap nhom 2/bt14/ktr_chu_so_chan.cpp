#include <stdio.h>
void nhap(int &n);
int check(int n);
void xuat(int a);
void main()
{
	int n;
	nhap(n);
	int kt = check(n);
	xuat(kt);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int check(int n)
{
	int m;
	while (n > 0)
	{
		m = n%10;
		
		if (m%2==0)
			n = n/10;
		else
		{
			
			break;
		}
	}
	if (m%2==0)
		return 1;
	else
		return 0;
	
}
void xuat(int a)
{
	if (a==0)
		printf("tat ca khong la so chan");
	else
		printf("tat ca la so chan");
}
