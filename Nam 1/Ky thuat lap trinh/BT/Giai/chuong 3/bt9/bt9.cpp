#include <stdio.h>
void xuat(int n, int A[]);
void nhapMotSo(int &k);
void nhap(int &n, int A[]);
void sapXep(int n, int A[]);
void chen(int k, int &n, int A[]);
void main()
{
	int A[1000];
	int n;
	nhap(n, A);
	sapXep(n, A);
	xuat(n, A);
	int k;
	nhapMotSo(k);
	chen(k, n, A);
	xuat(n, A);
}
void chen(int k, int &n, int A[])
{
	n++;
	int l = 0;
	int r = n;
	int mid =(l+r)/2;
	while(l<r)
	{
		if((k>=A[mid] && k<=A[mid-1]))
			break;
		if(k > A[mid])
		{
			r = mid - 1;
			mid = (l+r)/2;
		}
		if(k < A[mid])
		{
			l = mid + 1;
			mid = (l+r)/2;
		}
	}
	for(int j=n-1; j>=mid; j--)
		A[j+1] = A[j];
	A[mid] = k;
}
void sapXep(int n, int A[])
{
	for(int i=1; i<n; i++)
	{
		int a = A[i];
		for(int j=i-1; j>=0; j--)
			if(a>A[j])
				A[j+1] = A[j];
			else
				break;
		A[j+1] = a;
	}
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &A[i]);
}
void nhapMotSo(int &k)
{
	scanf("%d", &k);
}
void xuat(int n, int A[])
{
	for(int i=0; i<n; i++)
		printf("%d ", A[i]);
}