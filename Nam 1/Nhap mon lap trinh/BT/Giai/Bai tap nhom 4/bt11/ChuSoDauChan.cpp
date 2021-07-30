#include <stdio.h>
void nhap(int &n, int A[]);
int ChuSoDau(int x);
void ChuSoChanDau(int n, int A[]);
void xuat(int k);
void main()
{
	int n, A[1000];
	nhap(n, A);
	ChuSoChanDau(n, A);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for (int i =0; i<n;i++)
		scanf("%d", &A[i]);
}
int ChuSoDau(int x)
{
	int t;
	while (x>0)
	{
		t=x%10;
		x=x/10;
	}
	return t;
}
void ChuSoChanDau(int n, int A[])
{
	for(int i =0;i<n;i++)
		if(ChuSoDau(A[i])%2==0)
			xuat(A[i]);
}
void xuat(int k)
{
	printf("%d ", k);
}
