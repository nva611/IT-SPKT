#include <stdio.h>
void nhap(int &n);
int lkscp(int n);
void main()
{
	int n;
	nhap(n);
	int kq = lkscp(n);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int lkscp(int n)
{
	int i, j;
	for (i = 2; i < n; i++)
		for (j = 2; j < i; j++)
		{
			if (j*j==i)
				printf("%d, ", i);
			else
				continue;
		}
	return 1;
}