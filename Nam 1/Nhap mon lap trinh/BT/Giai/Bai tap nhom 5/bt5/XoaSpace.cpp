#include <stdio.h>
#include <string.h>
void DelSpace(char S[]);
void xuat(char S[]);
void main()
{
	char S[1000];
	gets(S);
	DelSpace(S);
	xuat(S);
}
void DelSpace(char S[])
{
	int len = strlen(S);
	for(int i=0; i<len; i++)
	{
		if(S[i]==' ')
		{
			for(int j=i; j<len-1; j++)
				S[j]=S[j+1];
			len--;
			i--;
		}
	}
	
	S[i]='\0';
}
void xuat(char S[])
{
	printf("%s", S);
}