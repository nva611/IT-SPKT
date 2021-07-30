
#include <stdio.h>
void nhap(int &n, int A[]);
void day_tang_nhat(int n, int A[]);
void xuat(int k, int A[]);
void  xuatKQ(int n, int T[], int A[]);
void main()
{
	int A[1000], n;
	nhap(n, A);
	day_tang_nhat(n, A);
}
void day_tang_nhat(int n, int A[])
{
	int L[1000]; 
	int T[1000];  
	L[n+1] = 1;
	for(int i=n; i>=0; i--)
	{
		int vtr_max = n+1;
		for(int j = i+1; j<=n+1; j++)
			if(A[i] < A[j] && L[vtr_max] < L[j])
				vtr_max = j;		  
		L[i] = L[vtr_max] + 1;
		T[i] = vtr_max; 
	}
	xuatKQ(n, T, A);  
}
void  xuatKQ(int n, int T[], int A[])
{
	int i = T[0];
	while(i!=n+1)
	{
		printf("%d ", A[i]);
		i =T[i];
	}
}
void xuat(int k, int A[])
{
	for(int i=0; i<k; i++)
		printf("%d ", A[i]);
}	
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	A[0] = -99999;
	A[n+1] = 99999;
	for(int i=1; i<=n; i++)
		scanf("%d", &A[i]);
}