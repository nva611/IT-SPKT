#include <stdio.h>
#define N 5
void nhap(int a[]);
int ngto(int n);
int ngtomax(int a[]);
void xuat(int k);
void main()
{
	int a[N];
	nhap(a);
	int kt = ngtomax(a);
	xuat(kt);
}
void nhap(int a[])
{
	for (int i= 0; i < N; i++)
		scanf("%d", &a[i]);
}
int ngto(int n)
{
	int d = 0;
	for (int i = 1; i <= n; i++)
		if (n%i==0)
			d++;
	if (d == 2)
		return 1;
	return 0;
}
int ngtomax(int a[])
{
	int t;
	for (int i = 0; i < N; i++)
		if (ngto(a[i])==1)
		{
			t = a[i];
			break;
		}
	if (t != a[i])
		return 0;
	for (int j = i; j < N; j++)
		if (a[j] > t && ngto(a[j])==1)
			t = a[j];
	return t;

}
void xuat(int k)
{
	printf("%d", k);
}