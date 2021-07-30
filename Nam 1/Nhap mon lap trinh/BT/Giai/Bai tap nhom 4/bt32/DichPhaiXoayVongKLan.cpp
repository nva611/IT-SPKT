#include <stdio.h>
void nhap(int &a, int A[], int &k);
void DichPhaiXoayVongKLan(int a, int A[], int k);
void xuat(int a, int A[]);
void main()
{
	int a, A[100], k;
	nhap(a, A, k);
	DichPhaiXoayVongKLan(a, A, k);
	xuat(a, A);
}
void nhap(int &a, int A[], int &k)
{
	scanf("%d", &a);
	for(int i=0; i<a; i++)
		scanf("%d", &A[i]);
	scanf("%d", &k);
}
void DichPhaiXoayVongKLan(int a, int A[], int k)
{
	for(int j=0; j<k; j++)
	{
		int temp = A[a-1];
		for(int i=a-1; i>0;i--)
			A[i]=A[i-1];
		A[0]=temp;
	}
}
void xuat(int a, int A[])
{
	for(int i=0;i<a;i++)
		printf("%d ", A[i]);
}
