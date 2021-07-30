#include <stdio.h>
#include <math.h>

struct PHANSO
{
	int tu;
	int mau;
} ;

void quy_dong(struct PHANSO &ps1, struct PHANSO &ps2);
int BCNN(int a, int b);
int UCLN(int a, int b);
void rut_gon(struct PHANSO &ps);
struct PHANSO tinh_thuong(struct PHANSO ps1, struct PHANSO ps2);
struct PHANSO tinh_tich(struct PHANSO ps1, struct PHANSO ps2);
struct PHANSO tinh_hieu(struct PHANSO ps1, struct PHANSO ps2);
struct PHANSO tinh_tong(struct PHANSO ps1, struct PHANSO ps2);
void xuat_phan_so(struct PHANSO ps);
void nhap_phan_so(struct PHANSO &ps);

void main()
{
	struct PHANSO ps1, ps2;
	nhap_phan_so(ps1);
	nhap_phan_so(ps2);

	printf("\nTong 2 so la: ");
	struct PHANSO tong = tinh_tong(ps1, ps2);
	rut_gon(tong);
	xuat_phan_so(tong);

	printf("\nHieu 2 so la: ");
	struct PHANSO hieu = tinh_hieu(ps1, ps2);
	rut_gon(hieu);
	xuat_phan_so(hieu);

	printf("\nTich 2 so la: ");
	struct PHANSO tich = tinh_tich(ps1, ps2);
	rut_gon(tich);
	xuat_phan_so(tich);

	printf("\nThuong 2 so la: ");
	if(ps2.tu==0)
		printf("Khong tinh duoc");
	else
	{
		struct PHANSO thuong = tinh_thuong(ps1, ps2);
		rut_gon(thuong);
		xuat_phan_so(thuong);
	}

	printf("\nRut gon PS1: ");
	rut_gon(ps1);
	xuat_phan_so(ps1);

	printf("\nRut gon PS2: ");
	rut_gon(ps2);
	xuat_phan_so(ps2);

	printf("\nQuy dong: ");
	quy_dong(ps1, ps2);
	xuat_phan_so(ps1);
	xuat_phan_so(ps2);
}
void quy_dong(struct PHANSO &ps1, struct PHANSO &ps2)
{
	int lcm = BCNN(ps1.mau, ps2.mau);

	ps1.tu *= lcm/ps1.mau;
	ps1.mau *= lcm/ps1.mau;

	ps2.tu *= lcm/ps2.mau;
	ps2.mau *= lcm/ps2.mau;
}
int BCNN(int a, int b)
{
	return a*b/UCLN(a, b);
}
int UCLN(int a, int b)
{
	if(a==0 || b==0)
		return a + b;
	while(a!=b)
	{
		if(a>b)
			a = a-b;
		else if(a<b)
			b = b-a;
	}
	return a;
}
void rut_gon(struct PHANSO &ps)
{
	int check =1;
	if(ps.mau<0 || ps.tu<0)
	{
		check = -1;
		ps.mau = abs(ps.mau);
		ps.tu = abs(ps.tu);
	}
		
	int gcd = UCLN(ps.tu, ps.mau);
	ps.tu = ps.tu/gcd;
	ps.mau = ps.mau/gcd;
	if(check==-1)
		ps.tu = -ps.tu;
}
struct PHANSO tinh_thuong(struct PHANSO ps1, struct PHANSO ps2)
{
	struct PHANSO thuong;
	thuong.tu = ps1.tu*ps2.mau;
	thuong.mau = ps1.mau*ps2.tu;
	return thuong;
}
struct PHANSO tinh_tich(struct PHANSO ps1, struct PHANSO ps2)
{
	struct PHANSO tich;
	tich.tu = ps1.tu*ps2.tu;
	tich.mau = ps1.mau*ps2.mau;
	return tich;
}
struct PHANSO tinh_hieu(struct PHANSO ps1, struct PHANSO ps2)
{
	struct PHANSO hieu;
	hieu.tu = ps1.tu*ps2.mau - ps2.tu*ps1.mau;
	hieu.mau = ps1.mau*ps2.mau;
	return hieu;
}
struct PHANSO tinh_tong(struct PHANSO ps1, struct PHANSO ps2)
{
	struct PHANSO tong;
	tong.tu = ps1.tu*ps2.mau + ps2.tu*ps1.mau;
	tong.mau = ps1.mau*ps2.mau;
	return tong;
}
void xuat_phan_so(struct PHANSO ps)
{
	printf("%d/%d ", ps.tu, ps.mau);
}
void nhap_phan_so(struct PHANSO &ps)
{
	scanf("%d%d", &ps.tu, &ps.mau);
}