#include <stdio.h>
void nhap(int &n);
int demhh(int n);
void xuat(int a, int n);
void main()
{
	int n;
	nhap(n);
	int kq = demhh(n);
	xuat(kq, n);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int demhh(int n)
{
	int i, d = 0;
	for (i = 6; i < n; i++)
	{
		int t =1;
		for (int j = 2; j < i; j++)
		{
			if (i%j==0)
				t += j;
			else
				continue;		
		}
		if (t==i)
		{
			d++;
			continue;
		}
		else
			continue;
	}
	return d;
}
void xuat(int a, int n)
{
	printf("Co %d so hoan hao nho hon %d", a, n);
}