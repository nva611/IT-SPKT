#include <stdio.h>
#include <string.h>
int Tong(char S[]);
void xuat(int kq);
void main()
{
	char S[1000];
	gets(S);
	int kq = Tong(S);
	xuat(kq);
}
int Tong(char S[])
{
	int len = strlen(S);
	int t=0;
	for(int i=0; i<len; i++)
		if(S[i]>='0' && S[i] <='9')
			t += S[i] - '0';
	return t;
}
void xuat(int kq)
{
	printf("%d", kq);
}