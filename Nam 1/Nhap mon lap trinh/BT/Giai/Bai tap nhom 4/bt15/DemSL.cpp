#include <stdio.h>
void nhap(int &n, int A[], int &m, int B[]);
int DemSLGT(int n, int A[], int m, int B[]);
void xuat(int k);
void main()
{
	int n, A[1000], m, B[1000];
	nhap(n, A, m, B);
	int kq = DemSLGT(n, A, m, B);
	xuat(kq);
}
void nhap(int &n, int A[], int &m, int B[])
{
	scanf("%d", &n);
	for (int i =0; i<n;i++)
		scanf("%d", &A[i]);
	scanf("%d", &m);
	for (i = 0; i<m;i++)
		scanf("%d", &B[i]);
}
int DemSLGT(int n, int A[], int m, int B[])
{
	int d=0;
	for(int i=0; i<n; i++)
	{
		for (int j=0; j<m;j++)
			if(A[i]==B[j])
				d++;
	}
	d=m+n-2*d;
	return d;
}
void xuat(int k)
{
	printf("%d", k);
}
