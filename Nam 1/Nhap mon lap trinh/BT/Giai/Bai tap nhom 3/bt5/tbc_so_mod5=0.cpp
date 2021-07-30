#include <stdio.h>
#define N 5
void nhap(int a[N]);
float tbcsomod5(int a[]);
void xuat(float k);
void main()
{
	int a[N];
	nhap(a);
	float kq = tbcsomod5(a);
	xuat(kq);
}
void nhap(int a[N])
{
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);
}
float tbcsomod5(int a[])
{
	float t =0;
	int d = 0;
	for (int i =0; i <N; i++)
		if (a[i]%5==0)
		{
			t+= a[i];
			d++;
		}
	t = t/d;
	return t;
}
void xuat(float k)
{
	printf("%f", k);
}