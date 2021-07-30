#include <stdio.h>
void phan_tich_so(int i, int n);
void xuat(int k, int A[]);
void nhap(int &n);

int A[1000], T[1000];	
void main()
{
	int n;
	nhap(n);
	phan_tich_so(1, n);
}
void phan_tich_so(int i, int n)
{
	
	for(int j = A[i-1]; j<=(n - T[i-1])/2; j++)
	{
		A[i] = j;
		T[i] = T[i-1] + j;
		phan_tich_so(i+1, n);
	}
	A[i] = n-T[i-1];
	xuat(i, A);
	
}
void xuat(int k, int A[])
{	
	for(int i=1; i<=k-1; i++)
		printf("%d + ", A[i]);
	printf("%d \n", A[i]);
}
void nhap(int &n)
{
	A[0] = 1;
	T[0] = 0;
	scanf("%d", &n);
}
