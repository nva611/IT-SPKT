#include <stdio.h>
void nhap(int &n, int A[]);
int TanXuat(int n, int A[], int B[], int D[]);
void xuat(int B[], int D[],int k);
void main()
{
	int n, A[1000], B[1000], D[1000];
	nhap(n, A);
	int kq = TanXuat(n, A, B, D);
	xuat(B, D, kq);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &A[i]);
}
int TanXuat(int n, int A[], int B[], int D[])
{
	int h = 0, k = 0;
	for (int i = 0; i<n;i++)
	{
		int t = A[i];
		for(int j = 0; j<i; j++)
			if(t==A[j])
				break;
		if(i==j)
		{
			int d = 0;
			B[h++] = A[i];
			for (j = 0; j< n; j++)
				if(A[j]==t)
					d++;
			D[k++] = d;
		}
	}
	return k;
}
void xuat(int B[], int D[],int k)
{
	for (int i = 0; i<k; i++)
		printf("%d  %d \n" , B[i], D[i]);
}
