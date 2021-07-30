#include <stdio.h>
int in(int i);
void xuat(int kq);
void main()
{
	int i;
	int kq = in(i);
}
int in(int i)
{
	for (i = 10; i <100; i++)
	{
		int a = i/10;
		int b = i %10;
		if (a+b == a*b)
			xuat(i);
	}
	return 1;
}
void xuat(int kq)
{
	printf("%d\n", kq);
}