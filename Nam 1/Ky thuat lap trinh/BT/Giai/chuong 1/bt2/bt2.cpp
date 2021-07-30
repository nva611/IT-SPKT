#include <stdio.h>
#include <stdlib.h>
struct PhanSo nhap(PhanSo *a);
struct PhanSo tong(PhanSo *a, int n);
struct PhanSo tich2(PhanSo *a, int n);
struct PhanSo RutGon(PhanSo &a);
double max(PhanSo *p, int n);

//double tich(PhanSo *p, int n);
struct PhanSo
{
	int tu;
	int mau;
};
void main()
{
	int n;
	printf("Nhap so ptu: ");
	scanf("%d", &n);
	struct PhanSo *p, kq1, kq2;
	p = (struct PhanSo*)malloc(n*sizeof(struct PhanSo));
	for(int i=0; i<n; i++)
		nhap((p+i));

	double kq = max(p, n);
	printf("%lf\n", kq);

//	double t = tich(p, n);
//	printf("Tich = %lf\n", t);

	
	kq1 = tong(p, n);
	printf("%d %d \n", kq1.tu, kq1.mau);
	RutGon(kq1);
	printf("Tong gon = %d/%d \n", kq1.tu, kq1.mau);

	kq2 = tich2(p, n);
	printf("%d %d\n", kq2.tu, kq2.mau);
	RutGon(kq2);
	printf("Tich Gon = %d/%d\n", kq2.tu, kq2.mau);
	
	
}
struct PhanSo nhap(PhanSo *a)
{
	
	scanf("%d", &a->tu);
	scanf("%d", &a->mau);
	return *a;
}
double max(PhanSo *p, int n)
{
	double max = double((*p).tu)/(*p).mau;
	for(int i=0; i<n; i++)
		if(double((*(p+i)).tu)/(*(p+i)).mau > max)
			max = double((*(p+i)).tu)/(*(p+i)).mau;
	return max;
}
/*double tich(PhanSo *p, int n)
{
	int tmau =1;
	int ttu =1;
	for(int i=0; i<n; i++)
	{
		tmau = tmau*(*(p+i)).mau;
		ttu = ttu * (*(p+i)).tu;
	}
	return double(ttu)/tmau;
}*/
/*struct PhanSo tong(PhanSo *p, int n)
{
	PhanSo kq;
	kq.mau =1;
	kq.tu =0;
	for(int i=0; i<n; i++)
		kq.mau = kq.mau * (*(p+i)).mau;
	for (i = 0; i<n; i++)
		kq.tu = kq.tu + (*(p+i)).tu*(kq.mau)/(*(p+i)).mau;
	return kq;
}
struct PhanSo tich2(PhanSo *a, int n)
{
	PhanSo kqa;
	kqa.tu =1;
	kqa.mau =1;
	for(int i=0; i<n; i++)
		kqa.mau *= (*(a+i)).mau;
	for(i=0; i<n; i++)
		kqa.tu *= (*(a+i)).tu;
	return kqa;
}
struct PhanSo RutGon(PhanSo &a)
{
	for(int i=2; i< a.mau*(a.mau>=a.tu) + a.tu*(a.mau<a.tu); i++)
		if(a.tu%i==0 && a.mau%i==0)
		{
			a.tu = a.tu/i;
			a.mau = a.mau/i;
		}
	return a;
}
/*
#include <stdio.h>
#include <stdlib.h>
struct PhanSo nhap(PhanSo *P, int n);
struct PhanSo
{
	int mau;
	int tu;
}
void main()
{
	int n;
	PhanSo *p;
	printf("Nhap so pso: ");
	scanf("%d", &n);
	p = (struct PhanSo*)malloc(n*sizeof(struct PhanSo));
	nhap(p);
}
struct PhanSo nhap(PhanSo *P, int n)
{
	for(int i=0; i<n; i++)
		scanf("%d%d", &(*(p+i)).tu, &(*(p+i)).mau);
}
