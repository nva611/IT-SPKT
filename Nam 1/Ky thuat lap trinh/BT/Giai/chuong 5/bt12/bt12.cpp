#include <stdio.h>

void liet_ke_hoan_vi(int n);
void dao_mang(int a, int b, int A[]);
void nhap(int &n);
void xuat(int A[], int k);
void swap(int &a, int &b);
void tao_mang(int A[], int n);

void main()
{
	int n;
	nhap(n);
	liet_ke_hoan_vi(n);
}
void liet_ke_hoan_vi(int n)
{
	int A[1000]={0};
	tao_mang(A, n);
	xuat(A, n);
	while(1)
	{
		int i = n-1;
		while(A[i]>A[i+1] && i>=0)
			i--;
		if(i<0)
			return;
		int k = n-1;
		while(A[k]<A[i] && k>i)
			k--;
		swap(A[i], A[k]);
		dao_mang(i+1, n-1, A);
		xuat(A, n);
	}
}
void dao_mang(int a, int b, int A[])
{
	while(a<b)
	{
		swap(A[a], A[b]);
		a++;
		b--;
	}
}
void tao_mang(int A[], int n)
{
	for(int i=0; i<n; i++)
		A[i] = i+1;
}
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void xuat(int A[], int k)
{
	for(int i=0; i<k; i++)
		printf("%d ", A[i]);
	printf("\n");
}
void nhap(int &n)
{
	scanf("%d", &n);
}