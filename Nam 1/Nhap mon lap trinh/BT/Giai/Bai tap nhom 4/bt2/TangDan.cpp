#include <stdio.h>
void nhap(int &n, int A[], int &m, int B[]);
int Tang(int n, int A[], int m, int B[], int C[]);
void xuat(int C[], int m, int n);
void main()
{
	int A[1000], B[1000], C[1000], n, m;
	nhap(n, A, m, B);
	int kq = Tang(n, A, m, B, C);
	xuat(C, m, n);
}
void nhap(int &n, int A[], int &m, int B[])
{
	scanf("%d", &n);
	for (int i =0; i<n;i++)
		scanf("%d", &A[i]);
	scanf("%d", &m);
	for (i =0; i<m; i++)
		scanf("%d", &B[i]);
}
int Tang(int n, int A[], int m, int B[], int C[])
{
	int h = 0, j = 0, i =0;
	while (j<m && i<n)
		if(A[i]<B[j])
			C[h++]=A[i++];
		else
			C[h++]=B[j++];
	if(j==m)
		for (i = i; i<n; i++)
			C[h++]=A[i];
	else if (i==n)
		for (j = j; j<m; j++)
			C[h++]=B[j];

	return 0;
}
void xuat(int C[], int m, int n)
{
	for(int i =0; i < m+n; i++)
		printf("%d ", C[i]);
}