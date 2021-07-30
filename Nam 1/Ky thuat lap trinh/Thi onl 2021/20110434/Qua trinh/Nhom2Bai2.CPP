#include <stdio.h>
void nhap(int &n, int A[]);
void xuat(int k, int A[]);
void them_phan_tu(int &n, int A[]);
void xoa_phan_tu(int &n, int A[]);
void tim_kiem_phan_tu(int n, int A[]);
void sua_phan_tu(int n, int A[]);
void main()
{
	int n, A[1000];
	nhap(n, A);

	them_phan_tu(n, A);
	xuat(n, A);

	xoa_phan_tu(n, A);
	xuat(n, A);

	sua_phan_tu(n, A);
	xuat(n, A);

	tim_kiem_phan_tu(n, A);

}
void sua_phan_tu(int n, int A[])
{
	int x, vtri;
	printf("\nNhap vi tri va gia tri can sua: ");
	scanf("%d%d", &vtri, &x);
	A[vtri] = x;
}
void tim_kiem_phan_tu(int n, int A[])
{
	int x; 
	printf("\nNhap so can tim: ");
	scanf("%d", &x); 

	int check = 0;
	for(int i=0; i<n; i++)
		if(A[i]==x)
			printf("%d ", i);
	if(i==n)
		printf("Khong tim thay");
}
void xoa_phan_tu(int &n, int A[])
{
	int vtri;
	printf("\nNhap vi tri phan tu can xoa: ");
	scanf("%d", &vtri);
	for(int i=vtri; i<n-1; i++)
		A[i] = A[i+1];
	n--;
}
void them_phan_tu(int &n, int A[])
{
	int x, vtri;
	printf("\nNhap gia tri phan tu va vi tri can them: ");
	scanf("%d%d", &x, &vtri);
	for(int i=n; i>vtri; i--)
		A[i] = A[i-1];
	A[i] = x;
	n++;	
}
void xuat(int k, int A[])
{
	for(int i=0; i<k; i++)
		printf("%d ", A[i]);
}
void nhap(int &n, int A[])
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &A[i]);
}