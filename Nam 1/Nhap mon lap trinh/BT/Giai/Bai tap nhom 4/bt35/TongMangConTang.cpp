#include <stdio.h>
void nhap(int &a, float A[]);
void TongMangConTang(int a, float A[]);
void xuat(float k);
void XuongHang();
void main()
{
	int a;
	float A[100];
	nhap(a, A);
	TongMangConTang(a, A);
}
void nhap(int &a, float A[])
{
	scanf("%d", &a);
	for(int i=0; i<a; i++)
		scanf("%f", &A[i]);
}
void TongMangConTang(int a, float A[])
{
	int j, i;
	for(i=0; i<a-1;i++)  //tim vi tri thoa man dau tien
	{
		float t=0;
		if(A[i]<A[i+1]) 
		{
			for(j=i; j<a-1; j++)
				if(A[j]<A[j+1]) 
					t+=A[j];
				else
					break;    //mang con het tang se break khoi for
			t+=A[j];   //cong phan tu cuoi cung cua mang con
			xuat(t);
			XuongHang();
			i = j;
		}
		
	}
}
void xuat(float k)
{
	printf("%.2f", k);
}
void XuongHang()
{
	printf("\n");
}