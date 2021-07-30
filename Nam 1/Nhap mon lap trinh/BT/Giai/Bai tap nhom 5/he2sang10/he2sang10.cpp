#include <stdio.h>
#include <string.h>
#include <math.h>
void he2sang10(char S[]);
void xuat(double k);
void main()
{
	char S[200];
	gets(S);
	he2sang10(S);
}
void he2sang10(char S[])
{
	double t=0;
	int len=strlen(S);
	int cham=len;
	for(int i=0; i<len; i++)
		if(S[i]=='.')
	//	{
			cham=i;
	//		break;
	//	}
	for(i=0; i<cham; i++)
		t = t + double((S[i]-'0'))*double(pow(2, cham-i-1));
	for(int j=cham+1; j<len; j++)
		t = t + double((S[j]-'0'))*double(pow(2, cham-j));
	xuat(t);
}		
void xuat(double k)
{
	printf("%lf", k);
}