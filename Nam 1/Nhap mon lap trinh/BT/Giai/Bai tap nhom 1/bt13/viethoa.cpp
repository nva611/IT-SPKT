#include <stdio.h>
void nhap(char &c);
char InHoa(char c);
void xuat(char kq);
void main()
{
	char c;
	nhap(c);
	char kq = InHoa(c);
	xuat(kq);
}
void nhap(char &c)
{
	scanf("%c", &c);
}
char InHoa(char c)
{
	if (c >= 'a' && c <= 'z') 
		c -= 32;
	else
		c += 32;
	return c;
}
void xuat(char kq)
{
	printf("%c", kq);
}