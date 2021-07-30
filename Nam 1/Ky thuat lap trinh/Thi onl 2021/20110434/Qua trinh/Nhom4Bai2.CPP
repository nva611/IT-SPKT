#include <stdio.h>
int dat_lich(int n, int A[], int B[], int KQ[]);
int sinh_nhi_phan(int n, int X[]);
void chuyen(int X[], int Y[], int n);
void nhap(int &n, int A[], int B[]);
void xuat(int time, int KQ[], int n);
void coppy_mang(int X[], int Y[], int n);

void main()
{
	int n;
	int A[1000], B[1000], KQ[1000];
	nhap(n, A, B);
	int kq = dat_lich(n, A, B, KQ);
	xuat(kq, KQ, n);
}
int dat_lich(int n, int A[], int B[], int KQ[])
{
	int X[1000] = {0};
	int time_min = 99999;
	while(1)
	{	
		if(sinh_nhi_phan(n, X)==0)
			break;
		int i=0;
		int timeA = 0;
		int timeB = 0;
		while(i<n)
		{
			if(X[i]==1)
				timeA += A[i];
			else
				timeB += B[i];
			if(timeA>time_min || timeB>time_min) 
			{

				for(int j=i+1; j<n; j++)
					X[j] = 1;
				break;
			}
			i++;	
		}
		if(i==n)
		{
			if(timeA>timeB)
			{
				coppy_mang(X, KQ, n);
				time_min = timeA;
			}
			else
			{
				coppy_mang(X, KQ, n);
				time_min = timeB;
			}
		}
	}
	return time_min;
}
void xuat(int time, int KQ[], int n)
{
	printf("Time = %d\n", time);
	for(int i=0; i<n; i++)
		if(KQ[i]==1)
			printf("A ");
		else
			printf("B ");
}
void coppy_mang(int X[], int Y[], int n)
{
	for(int i=0; i<n; i++)
		Y[i] = X[i];
}
int sinh_nhi_phan(int n, int X[])
{
	int i = n-1;
	while(X[i]==1 && i>=0)
	{
		X[i]=0;
		i--;
	}
	if(i<0)
		return 0;

	X[i] = 1;
	return 1;
}
void nhap(int &n, int A[], int B[])
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &A[i]);
	for(i=0; i<n; i++)
		scanf("%d", &B[i]);
}
