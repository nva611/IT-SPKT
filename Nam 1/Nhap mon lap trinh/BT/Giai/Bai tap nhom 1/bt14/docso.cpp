#include <stdio.h>
void nhap(int &a);
char* doc(int a);
void xuat(char kq);
void main()
{
	int a;
	nhap(a);
	char* kq = doc(a);
	xuat(kq);
}
void nhap(int &a)
{
	scanf("%d", &a);
}
char* doc(int a)
{
	char *s;
	switch(a)
	{
	case 1: s = "mot"; break;
	default: s = "Khong dem duoc";
	}
	return s;
}
void xuat(char* kq)
{
	printf("%c", kq);
}