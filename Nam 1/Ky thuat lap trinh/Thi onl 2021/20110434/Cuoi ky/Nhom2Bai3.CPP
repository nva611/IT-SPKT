#include <stdio.h>
#include <string.h>
void nhap_full(char A[], char B[]);
void nhap(char A[]);
void hieu(char A[], char B[], char C[]);
void xuat(char C[]);
void tong(char A[], char B[], char C[]);
void doi_sang_lon_tru_nho(char A[], char B[]);
int so_sanh(char A[], char B[]);

void main()
{
	char A[201], B[201], C[202];
	nhap(A);
	nhap(B);
	nhap_full(A, B);
	
	tong(A, B, C);
	xuat(C);
	
	printf("\n");
	hieu(A, B, C);
	xuat(C);
}
int so_sanh(char A[], char B[])
{
	int len =strlen(A);
	for(int i=len-1; i>=0; i--)
	{
		if(A[i]<B[i])
			return -1;
		else if(A[i]>B[i])
			return 1;
	}
	return 0;
	
}
void doi_sang_lon_tru_nho(char A[], char B[])
{
	int len = strlen(A);
	for(int i=0; i<len; i++)
	{
		char temp = A[i];
		A[i] = B[i];
		B[i] = temp;
	}
}
void hieu(char A[], char B[], char C[])
{
	int check = so_sanh(A, B);
	if(check==-1)
	{
		doi_sang_lon_tru_nho(A, B);
		printf("-");
	}
	else if(check==0)
	{
		C[0] = '0';
		C[1] = '\0';
		return;
	}
	int muon=0;
	int len = strlen(A);
	for(int i=0; i<len; i++)
	{
		int hieu = 10*((A[i]-'0') < (B[i]-'0'+muon)) + (A[i]-'0') - (B[i]-'0'+muon);
		C[i] = hieu + '0';
		if((A[i]-'0')<(B[i]-'0'+muon))
			muon = 1;
		else
			muon = 0;
	}
	i--;
	while(C[i]=='0' && i>0)
		i--;
	C[i+1] = '\0';
	strrev(C);
}
void nhap_full(char A[], char B[])
{
	strrev(A);
	strrev(B);
	int lenA = strlen(A);
	int lenB = strlen(B);
	if(lenA>lenB)
	{
		for(int i=lenB; i<lenA; i++)
			B[i] = '0';
		B[i] = '\0';
	}
	else
	{
		for(int i=lenA; i<lenB; i++)
			A[i] = '0';
		A[i] = '\0';
	}
}
void tong(char A[], char B[], char C[])
{
	int t = 0;
	int len = strlen(A);
	for(int i=0; i<len; i++)
	{
		t = t + (A[i]-'0') + (B[i]-'0');
		C[i] = t%10 + '0';
		t = t/10;
	}
	if(t==1)
	{
		
		C[i++] = '1';
		C[i] = '\0';
	}
	else
		C[i] = '\0';
	strrev(C);
}
void xuat(char C[])
{
	printf("%s", C);
}
void nhap(char A[])
{
	gets(A);
}