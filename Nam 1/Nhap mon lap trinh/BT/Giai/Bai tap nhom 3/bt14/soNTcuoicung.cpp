#include <stdio.h>
void nhap(int &n, int A[]);
int laNT(int m);
int soNTCuoiCung(int n, int A[]);
void xuat(int k);
void main()
{
	int n, A[100];
	nhap(n, A);
	int kt = soNT(n, A);
	xuat(kt);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &A[i]);
}
int laNT(int m)
{
	int d = 0; 
	for (int i = 1; i <= m; i++)
		if (m%i==0)
			d++;
	if (d==2)
		return 1;
	return 0;
}
int soNTCuoiCung(int n, int A[])
{
	for(int i = n-1; i >=0; i--)
		if (laNT(A[i])==1)
			return A[i];
	return -1;
}
void xuat(int k)
{
	printf("%d", k);
}