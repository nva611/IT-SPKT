#include <stdio.h>
void nhap(int &n);
int lkshh(int n);
void main()
{
	int n;
	nhap(n);
	int kq = lkshh(n);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int lkshh(int n)
{
	int i, j;

	for (i = 6; i<n; i++)
	{
		int t = 0;
		for (j = 1; j<i; j++)
		{
			if (i%j==0)
				t += j;
			else
				continue;
		}
		if (t == i)
			printf("%d, ", i);
		else
			continue;
	}
	return 1;
}