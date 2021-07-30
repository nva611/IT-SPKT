#include <stdio.h>
#include <string.h>
void DaoNguoc(char S[], char D[]);
void xuat(char D[]);
void main()
{
	char S[1000], D[1000];
	gets(S);
	DaoNguoc(S, D);
	xuat(D);
}
void DaoNguoc(char S[], char D[])
{
	int len = strlen(S);
	int d=0;
	for(int i=len-1; i>=0; i--)
	{
		if(S[i]==' ')
		{
			int j=i+1;
			while(S[j]!=' ' && j<len)
				D[d++]=S[j++];
			D[d++]=' ';
			len = i;
		}
	}
	if(S[0]!=' ')
		for(i=0; i<len; i++)
			D[d++]=S[i];
	D[d]='\0';
	
}
void xuat(char D[])
{
	printf("%s", D);
}
