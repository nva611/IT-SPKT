#include <stdio.h>
void nhap(int &a, int A[]);
void MangConTang(int a, int A[]);
void xuat(int k);
void main()
{
	int a, A[100];
	nhap(a, A);
	MangConTang(a, A);
}
void nhap(int &a, int A[])
{
	scanf("%d", &a);
	for(int i=0; i<a; i++)
		scanf("%d", &A[i]);
}
void MangConTang(int a, int A[])
{
	for(int i=0; i<a;i++)
		if(A[i]<A[i+1]) //tim vi tri tang dan
			for(int j=i; j<a;j++)
			{
				if(A[j]<A[j+1])
				{
					xuat(A[j]);
					continue;
				}
				xuat(A[j]); //xuat vi tri tang dan cuoi cung
				printf("\n");
				i=j; //vi tri tiep theo sau khi break
				break; //het tang thi ra ngoai kiem tang khac
			}
}
void xuat(int k)
{
	printf("%d ", k);
}