#include <stdio.h>
#include <string.h>
#include <math.h>
void nhap(char S[]);
double He16Sang10(char S[]);
void xuat(double kq);
void main()
{
	char S[100];
	nhap(S);
	double kq = He16Sang10(S);
	xuat(kq);
}
void nhap(char S[])
{
	gets(S);
}
double He16Sang10(char S[])
{
	double t=0;
	int len = strlen(S);
	int out = len;
	for(int i=0; i<len; i++)
		if(S[i]=='.')
			out = i;
	for(i=0; i<out; i++)
		if (S[i]>='0' && S[i]<='9')
			t = t + (S[i] - '0')*pow(16, out-1-i);
		else 
			t = t + (S[i] - 'A' + 10)*pow(16, out-1-i);
	for(i=out+1; i<len; i++)
		if (S[i]>='0' && S[i]<='9')
			t = t + (S[i] - '0')*pow(16, out-i);
		else 
			t = t + (S[i] - 'A' + 10)*pow(16, out-i);
	return t;

}
void xuat(double kq)
{
	printf("%.4lf", kq);
}

/*12AC4F.AC
012345678*/