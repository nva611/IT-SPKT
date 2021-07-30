#include <stdio.h>
void nhap(int &n, int A[]);
int max2(int n, int A[]);
void xuat(int k);
void main()
{
	int n, A[1000];
	nhap(n, A);
	int kt = max2(n, A);
	xuat(kt);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for (int i = 0; i<n;i++)
		scanf("%d", &A[i]);
}
int max2(int n, int A[])
{
	int m1, m2;
	if (A[0]>A[1])
	{
		m1=A[0];
		m2=A[1];
	}
	else
	{
		m1=A[1];
		m2=A[0];
	}
	for (int i = 2; i<n; i++)
	{
		if(A[i]>m1)
		{
			m1=A[i];
			m2=A[i-2];
		}
		else if(A[i]>m2 && A[i]<m1)
		{
			m2 =A[i];
		}	
	}
	return m2;
}
void xuat(int k)
{
	printf("%d", k);
}