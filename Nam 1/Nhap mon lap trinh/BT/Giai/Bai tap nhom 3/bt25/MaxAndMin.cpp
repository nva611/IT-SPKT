#include <stdio.h>
#define N 5
void nhap(int a[]);
int max(int a[]);
int min(int a[]);
void xuat(int k);
void main()
{
	int a[N];
	nhap(a);
	int x = max(a);
	int y = min(a);
}
void nhap(int a[])
{
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);
}
int max(int a[])
{
	int max = a[0];
	for (int i = 1; i < N; i++)
		if (a[i] > max)
			max = a[i];
	xuat(max);
	return max;
}
int min(int a[])
{
	int min = a[0];
	for (int i = 1; i < N; i++)
		if (a[i] < min)
			min = a[i];
	xuat(min);
	return min;
}
void xuat(int k)
{
	printf("%d", k);
}