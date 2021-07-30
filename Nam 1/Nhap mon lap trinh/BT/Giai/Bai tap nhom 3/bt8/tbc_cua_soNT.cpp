#include <stdio.h>
#define N 5
void nhap(int a[]);
int laNT(int n);
float tbcNT(int a[]);
void xuat(float k);
void main()
{
	int a[N];
	nhap(a);
	float kq = tbcNT(a);
	xuat(kq);
}
void nhap(int a[])
{
	for (int i = 0; i <N; i++)
		scanf("%d", &a[i]);
}
int laNT(int n)
{
	int d = 0;
	for (int i = 1; i <= n; i++)
		if (n%i==0)
			d++;
	if (d==2)
		return 1;
	return 0;
}
float tbcNT(int a[])
{
	int d = 0;
	float t = 0;
	for (int i = 0; i < N; i++)
		if(laNT(a[i]) == 1)
		{
			d++;
			t += a[i];
		}
	t = t/d;
	return t;
}
void xuat(float k)
{
	printf("%f", k);
}