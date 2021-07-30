#include <stdio.h>
#include <string.h>
int ChuoiCon(char A[], char B[]);
void xuat(int kq);
void main()
{
	char A[100], B[100];
	gets(A);
	gets(B);
	int kq = ChuoiCon(A, B);
	xuat(kq);
}
int ChuoiCon(char A[], char B[])
{
	if(strstr(A, B)!= NULL || strstr(B, A)!=NULL)
		return 1;
	return 0;
}
void xuat(int kq)
{
	printf("%d", kq);
}
