#include <stdio.h>
void nhap(int &a, int A[]);
void MangConLonHon2Ptu(int a, int A[]);
void xuat(int k);
void XuongHang();
void main()
{
	int a, A[100];
	nhap(a, A);
	MangConLonHon2Ptu(a, A);
}
void nhap(int &a, int A[])
{
	scanf("%d", &a);
	for(int i=0;i<a;i++)
		scanf("%d", &A[i]);
}
void MangConLonHon2Ptu(int a, int A[])
{
	int SoPtu;
	for (SoPtu = 3; SoPtu<=a; SoPtu++)
	{
		int k = 0;
		for(int i=0; i<a - SoPtu + 1; i++) //i la vi tri bat dau xuat
		{
			k = i; // k la chi so chay
			for(int j=0; j<SoPtu; j++) // j la so lan xuat = so phan tu
				xuat(A[k++]);
			XuongHang();
			
		}
	}
}
void xuat(int k)
{
	printf("%d ", k);
}
void XuongHang()
{
	printf("\n");
}
