#include <stdio.h>
#include <math.h>

struct DIEM
{
	int x;
	int y;
};

void nhap_diem(struct DIEM &a);
void xuat_diem(struct DIEM k);
struct DIEM doi_xung_tung(struct DIEM a);
struct DIEM doi_xung_hoanh(struct DIEM a);
struct DIEM doi_xung_tam(struct DIEM a);
void xuat(double k);
double khoang_cach(struct DIEM a, struct DIEM b);

void main()
{
	struct DIEM a, b;

	printf("Moi ban nhap 1 diem: ");
	nhap_diem(a);

	printf("\nDoi xung tung: ");
	struct DIEM dx_tung = doi_xung_tung(a);
	xuat_diem(dx_tung);

	printf("\nDoi xung hoanh: ");
	struct DIEM dx_hoanh = doi_xung_hoanh(a);
	xuat_diem(dx_hoanh);

	printf("\nDoi xung tam: ");
	struct DIEM dx_tam = doi_xung_tam(a);
	xuat_diem(dx_tam);

	printf("\nMoi ban nhap them 1 diem: ");
	nhap_diem(b);

	printf("\nKhoang cach 2 diem ban da nhap la: ");
	double kc = khoang_cach(a, b);
	xuat(kc);
}
double khoang_cach(struct DIEM a, struct DIEM b)
{
	return sqrt(double(a.x-b.x)*(a.x-b.x) + double(a.y-b.y)*(a.y-b.y));
}
void xuat(double k)
{
	printf("%.2lf", k);
}
struct DIEM doi_xung_tam(struct DIEM a)
{
	struct DIEM k;
	k.x = -a.x;
	k.y = -a.y;
	return k;
}
struct DIEM doi_xung_hoanh(struct DIEM a)
{
	struct DIEM k;
	k.x = a.x;
	k.y = -a.y;
	return k;
}
struct DIEM doi_xung_tung(struct DIEM a)
{
	struct DIEM k;
	k.x = -a.x;
	k.y = a.y;
	return k;
}
void xuat_diem(struct DIEM k)
{
	printf("(%d, %d)", k.x, k.y);
}
void nhap_diem(struct DIEM &a)
{
	scanf("%d%d", &a.x, &a.y);
}