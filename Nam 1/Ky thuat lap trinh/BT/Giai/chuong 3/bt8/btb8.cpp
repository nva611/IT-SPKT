#include <stdio.h>
void xuat(int kq);
void nhap(float &A);
int YeuCau(float A);
void main()
{
	float A;
	nhap(A);
	int kq = YeuCau(A);
	xuat(kq);
} 
int YeuCau(float A)
{
	float t=0;
	int i=1;
	while(t<=A)
	{
		t += 1/float(i);
		i++;
	}
	return i-1;
}
void nhap(float &A)
{
	scanf("%f", &A);
}
void xuat(int kq)
{
	printf("%d", kq);
}