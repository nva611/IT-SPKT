#include <stdio.h>
#include <string.h>
void nhap(int &n);
void he10sang2(int n);
void xuat(char k[]);
void main()
{
	int n;
	nhap(n);
	he10sang2(n);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
void he10sang2(int n)
{
	char S[200];
	int i=0;
	while(n>0)
	{
		int t=n%2;
		S[i++]=t+'0';
		n=n/2;
	}
	S[i]='\0';
	strrev(S);
	xuat(S);
}
void xuat(char k[])
{
	printf("%s", k);
}

