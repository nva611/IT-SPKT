#include <stdio.h>
#define N 5
void nhap(float a[]);
float soam(float a[]);
void xuat(float k);
void main()
{
	float a[N];
	nhap(a);
	float kt = soam(a);
	xuat(kt);
}
void nhap(float a[])
{
	for (int i = 0; i < N; i++)
		scanf("%f", &a[i]);
}
float soam(float a[])
{
	for (int i = 0; i < N; i++)
		if (a[i] < 0)
			return a[i];
	return 1;
}
void xuat(float k)
{
	printf("%f", k);
}