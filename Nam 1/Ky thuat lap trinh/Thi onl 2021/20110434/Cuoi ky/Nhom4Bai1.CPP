#include <stdio.h>
void liet_ke_tap_con(int n);
void xuat(int A[], int k);
void nhap(int &n);
void tao_mang(int A[], int n);
void main()
{
	int n;
	nhap(n);
	liet_ke_tap_con(n);
}
void liet_ke_tap_con(int n)
{
	int A[1000];
	for(int k=1; k<=n; k++)
	{
		tao_mang(A, k);
		xuat(A, k);
		while(1)
		{
			
			int i=k-1;
			while(A[i] == n-k+i+1 && i>=0)
				i--;
			if(i<0)
				break;
			A[i]++;
			for(int j=i+1; j<k; j++)
				A[j] = A[j-1] + 1;
			xuat(A, k);
		}
	}
}
void tao_mang(int A[], int n)
{
	for(int i=0; i<n; i++)
		A[i] = i+1;
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