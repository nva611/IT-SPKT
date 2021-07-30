#include <stdio.h>
#include <string.h>
int tinh(char S[]);
void nhap(char S[]);
void xuat(int k);
int lay_gia_tri(char S[], int &i);
void main()
{
	char S[1000];
	nhap(S);
	int kq = tinh(S);
	xuat(kq);
}
int tinh(char S[])
{
	int tong = 0;
	int len= strlen(S);
	for(int i=0; i<len; i++)
	{
		if(S[i]>='0' && S[i]<='9')
			tong += lay_gia_tri(S, i);
	}
	return tong;
}
int lay_gia_tri(char S[], int &i)
{
	int t=S[i]-'0';
	i++;
	while(S[i]>='0' && S[i]<='9')
	{
		t = t*10 + S[i]-'0' ;
		i++;
	}
	return t;
}
void xuat(int k)
{
	printf("%d", k);
}
void nhap(char S[])
{
	gets(S);
}