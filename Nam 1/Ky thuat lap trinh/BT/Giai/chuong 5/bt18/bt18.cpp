#include <stdio.h>
void nhap(int &n);
void liet_ke_01(int n);
void xuat(int n, int A[]);
void main()
{
	int n;
	nhap(n);
	liet_ke_01(n);
}
void liet_ke_01(int n)
{
	int A[1000] = {0};
//	xuat(n, A);
	
	while(1)
	{
		int i=n-1;
		while(A[i]==1 && i>=0)
		{
			A[i] = 0;
			i--;
		}
		if(i<0)
			break;
		A[i]=1;
		int dem =0;
		for(int j=0; j<n-1; j++)
		{
			if(A[j]==0 && A[j+1]==1)
				dem++;
			if(dem>=3)
				break;
		}
		if(dem==2)
			xuat(n, A);
	}
}
void xuat(int n, int A[])
{
	for(int i=0; i<n; i++)
		printf("%d", A[i]);
	printf("\n");
}

void nhap(int &n)
{
	scanf("%d", &n);
}