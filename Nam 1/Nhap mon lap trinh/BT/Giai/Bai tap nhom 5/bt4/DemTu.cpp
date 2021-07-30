#include <stdio.h>
#include <string.h>
int DemTu(char S[]);
void xuat(int kq);
void main()
{
	char S[1000];
	gets(S);
	int kq = DemTu(S);
	xuat(kq);
}
int DemTu(char S[])
{
	int dem=0;
	int len = strlen(S);
	for(int i=0; i<len; i++)
		if (S[i]==' ')
			dem++;
	return dem+1;
}
void xuat(int kq)
{
	printf("%d", kq);
}