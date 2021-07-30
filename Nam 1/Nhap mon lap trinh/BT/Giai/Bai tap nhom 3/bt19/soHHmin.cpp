#include <stdio.h>
#define N 5
void nhap(int a[]);
int laHH(int n);
int soHHmin(int a[]);
void xuat(int k);
void main()
{
	int a[N];
	nhap(a);
	int kt = soHHmin(a);
	xuat(kt);
}
void nhap(int a[])
{
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);
}
int laHH(int n)
{
	int t = 0;
	for (int i = 1; i < n; i++)
		if (n%i==0)
			t += i;
	if (t==n)
		return 1;
	return 0;
}
int soHHmin(int a[])
{
	int t = 0;
	for (int i = 0; i< N; i++)
		if (laHH(a[i])==1)
		{
			t = a[i];
			break;
		}
	if (t != a[i])
		return 0;
	for (int j = i; j < N; j++)
		if (a[j]> t && laHH(a[j])==1)
			t = a[j];
	return t;
}
void xuat(int k)
{
	printf("%d", k);
}