#include <stdio.h>
void nhap(int n, int A[]);
int DonDieu(int n, int A[]);
void xuat(int k);
void main()
{
	int n, A[100];
	nhap(n, A);
	int kt = DonDieu(n, A);
	xuat(kt);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for (int i  =0; i < n; i++)
		scanf("%d", &A[i]);
}
int DonDieu(int n, int A[])
{
	for (int i = 1; i < n-1; i++)
		if (A[0] > A[1])
		{
			if(A[i]<= A[i+1])
				return 0;
			return 1;
		}
		else if(A[0]<A[1])
		{
			if(A[i] >= A[i+1])
				return 0;
			return 2;
		}
		else
			return 0;
}
void xuat(int k)
{
	if(k==1)
		printf("tang");
	else if (k==2)
		printf("khong tang");
	else
		printf("Kh tang Kh giam");
}
