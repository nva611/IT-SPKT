#include <stdio.h>
#include <string.h>
void nhap(int &n);
void He10Sang16(int n);
void xuat(char kq[]);
void main()
{
	int n;
	nhap(n);
	He10Sang16(n);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
void He10Sang16(int n)
{
	char S[100];
	int i=0;
	while(n>0)
	{
		int t = n%16;
		if(t<=15 && t>=10)
			S[i++] = 'A' - 10 + t;
		else
			S[i++] = '0' + t;
		n=n/16;
	}
	S[i]='\0';
	strrev(S);
	xuat(S);
}
void xuat(char kq[])
{
	printf("%s ", kq);
}