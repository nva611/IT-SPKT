#include <stdio.h>
#include <string.h>
void chuyen_sang_thap_luc_phan(int n, char S[]);
void chuyen_sang_bat_phan(int n, char S[]);
void chuyen_sang_nhi_phan(int n, char S[]);
void nhap(int &n);
void xuat(char S[]);

void main()
{
	int n;
	char S[1000];
	nhap(n);
	
	chuyen_sang_nhi_phan(n, S);
	xuat(S);
	printf("\n");

	chuyen_sang_bat_phan(n, S);
	xuat(S);
	printf("\n");

	chuyen_sang_thap_luc_phan(n, S);
	xuat(S);
}
void chuyen_sang_thap_luc_phan(int n, char S[])
{
	if(n==0)
	{
		S[0] = '0';
		S[1] = '\0';
		return;
	}
	int du;
	int i=0;
	while(n!=0)
	{
		du = n%16;
		if(du<=9)
			S[i++] = du + '0';
		else
			S[i++] = du - 10 + 'A';
		n = n/16;
	}
	S[i] = '\0';
	strrev(S);
}
void chuyen_sang_bat_phan(int n, char S[])
{
	if(n==0)
	{
		S[0] = '0';
		S[1] = '\0';
		return;
	}
	int du;
	int i=0;
	while(n!=0)
	{
		du = n%8;
		S[i++] = du + '0';
		n = n/8;
	}
	S[i] = '\0';
	strrev(S);
}
void chuyen_sang_nhi_phan(int n, char S[])
{
	if(n==0)
	{
		S[0] = '0';
		S[1] = '\0';
		return;
	}
	int du;
	int i=0;
	while(n!=0)
	{
		du = n%2;
		S[i++] = du + '0';
		n=n/2;
	}
	S[i] = '\0';
	strrev(S);
}
void xuat(char S[])
{
	printf("%s", S);
}
void nhap(int &n)
{
	scanf("%d", &n);
}