#include <stdio.h>
void xuat(int n, int A[]);
void xoa_trung(int &n, int A[]);
void nhap(int &n, int A[]);
void main()
{
	int n, A[1000];
	nhap(n, A);
	xoa_trung(n, A);
	xuat(n, A);
}
void xuat(int n, int A[])
{
	for(int i=0; i<n; i++)
		printf("%d ", A[i]);
}
void xoa_trung(int &n, int A[])
{

	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
			if(A[i] == A[j])
			{
				for(int k=j; k<n-1; k++)
					A[k] = A[k+1];
				n--;
				j--;
			}
	}
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &A[i]);
}
