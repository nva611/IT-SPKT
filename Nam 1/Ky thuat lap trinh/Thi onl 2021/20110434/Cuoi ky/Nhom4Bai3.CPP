#include <stdio.h>
void sinh_day_dau_ngoac(int n, int A[], int k);
int dem_sau(int n, int A[]);
int check_sau(int n, int A[]);
void nhap(int &n, int &k);
void xuat(int n, int A[]);
void main()
{
	int A[1000] = {0};
	int n, k;
	nhap(n, k);
	sinh_day_dau_ngoac(n, A, k);
	
}
void sinh_day_dau_ngoac(int n, int A[], int k)
{
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
		A[i] = 1;
		if(check_sau(n, A)==1 && dem_sau(n, A)==k)
			xuat(n, A);
	}
}
int dem_sau(int n, int A[])
{
	int max =0;
	int dem =0;
	for(int i=0; i<n; i++)
	{
		if(A[i]==1)
			dem++;
		else
			dem--;
		if(dem>max)
			max = dem;
	}
	return max;
}
int check_sau(int n, int A[])
{
	int dem =0;
	for(int i=0; i<n; i++)
	{
		if(A[i]==1)
			dem++;
		else
			dem--;
		if(dem<0)
			return 0;
	}
	if(dem==0)
		return 1;
	return 0;
}
void nhap(int &n, int &k)
{
	scanf("%d%d", &n, &k);
}
void xuat(int n, int A[])
{
	for(int i=0; i<n; i++)
	{
		if(A[i]==1)
			printf("(");
		else
			printf(")");
	}
	printf("\n");
}
