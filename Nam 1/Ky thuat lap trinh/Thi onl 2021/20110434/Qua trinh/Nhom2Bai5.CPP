#include <stdio.h>
#include <string.h>

void xu_ly(char s[]);
void dich_chuyen(int b, int a, char s[]);
void xuat(char s[]);
void nhap(char s[]);

void main()
{
	char s[1000];
	nhap(s);
	xu_ly(s);
	xuat(s);
}
void xu_ly(char s[])
{
	int i=0;
	while(s[i]==' ')
		i++;
	dich_chuyen(i, 0, s);
	if(s[0]>='a' && s[0]<='z')
		s[0] -= 32;

	int len = strlen(s);
	for(i=1; i < len; i++)
	{
		if(s[i]==' ')
		{
			int k = i;
			while(s[k]==' ')
				k++;
			dich_chuyen(k-1, i, s);
			i++;
			if(s[i]>='a' && s[i]<='z')
				s[i] -= 32;
			len = strlen(s);
		}
	}
}
void dich_chuyen(int b, int a, char s[])
{
	int len = strlen(s);
	if(a==b)
		return;
	for(int i=b; i<len; i++)
		s[a++] = s[i];
	s[a] = '\0';
}
void xuat(char s[])
{
	int len =strlen(s);
	for(int i=0; i<len; i++)
		printf("%c", s[i]);
}
void nhap(char s[])
{
	gets(s);
}