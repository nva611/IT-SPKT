#include <stdio.h>
void nhi_phan(int n);
void xuat(int A[], int n);
void nhap(int &n);
void main()
{
	int n;
	nhap(n);
	nhi_phan(n);
}
void nhi_phan(int n)
{
	int A[1000] = {0};
	xuat(A, n);
	while(1)
	{
		int i = n-1;
		while(A[i]==1 && i>=0)
		{
			A[i] = 0;
			i--;
		}
		if(i<0)
			break;
		A[i] = 1;
		xuat(A, n);
	}
}
void xuat(int A[], int n)
{
	for(int i=0; i<n; i++)
		printf("%d", A[i]);
	printf("\n");
}
void nhap(int &n)
{
	scanf("%d", &n);
}