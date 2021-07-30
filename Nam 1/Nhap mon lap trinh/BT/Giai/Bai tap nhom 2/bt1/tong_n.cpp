#include <stdio.h>
void nhap(int &b);
int sum1(int s, int n);
void xuat(int a);
void main()
{
	int n = 2, s;
		printf("%d", n);
	nhap(n);

	int kq = sum1(s, n);
	printf("%d", n);
	xuat(kq);
}
void nhap(int &b)
{
	scanf("%d", &b);
}
int sum1(int s, int n)
{
	int i = 0, sum = 0;
	while(i<=n)
	{
		sum += i;
		i += 1;
	}
	return sum;
}
void xuat(int a)
{
	printf("Kq la: %d", a);
}
