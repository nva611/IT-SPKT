#include <stdio.h>
void nhap(int &n);
void nhap_day_phan_so(struct PHANSO ps[], int n);
void xuat_day_phan_so(struct PHANSO ps[], int n);
double gia_tri_ps(struct PHANSO a);
void xuat_phan_so(struct PHANSO a);
struct PHANSO phan_so_max(struct PHANSO ps[], int n);
struct PHANSO tinh_tich(struct PHANSO ps[], int n);
struct PHANSO tinh_tong(struct PHANSO ps[], int n);
void day_nghich_dao(struct PHANSO ps[], int n);
struct PHANSO nghich_dao(struct PHANSO &a);

struct PHANSO
{
	int tu;
	int mau;
};
void main()
{
	struct PHANSO ps[50];
	int n;
	nhap(n);
	nhap_day_phan_so(ps, n);
	xuat_day_phan_so(ps, n);

	printf("\nPhan so lon nhat la: ");
	struct PHANSO psMax = phan_so_max(ps, n);
	xuat_phan_so(psMax);

	printf("\nTong day phan so: ");
	struct PHANSO tong = tinh_tong(ps, n);
	xuat_phan_so(tong);

	printf("\nTich day phan so: ");
	struct PHANSO tich = tinh_tich(ps, n);
	xuat_phan_so(tich);
	
	printf("\nDay nghich dao: ");
	day_nghich_dao(ps, n);
}
struct PHANSO nghich_dao(struct PHANSO &a)
{
	int temp = a.tu;
	a.tu = a.mau;
	a.mau = temp;
	return a;
}
void day_nghich_dao(struct PHANSO ps[], int n)
{
	for(int i=0; i<n; i++)
	{
		if(ps[i].tu==0)
		{
			printf("khong co nghich dao ");
			i++;
		}
		nghich_dao(ps[i]);
		xuat_phan_so(ps[i]);
	}
		
}
struct PHANSO tinh_tich(struct PHANSO ps[], int n)
{
	struct PHANSO t;
	t.mau=1;
	t.tu=1;
	for(int i=0; i<n; i++)
	{
		t.tu *= ps[i].tu;
		t.mau *= ps[i].mau;
	}
	return t;
}
struct PHANSO tinh_tong(struct PHANSO ps[], int n)
{
	struct PHANSO t;
	t.mau=1;
	t.tu=0;
	for(int i=0; i<n; i++)
		t.mau *= ps[i].mau;
	for(i=0; i<n; i++)
		t.tu += (ps[i].tu) * (t.mau) / (ps[i].mau);
	return t;
}
struct PHANSO phan_so_max(struct PHANSO ps[], int n)
{
	int imax = 0;
	for(int i=1; i<n; i++)
		if(gia_tri_ps(ps[i]) > gia_tri_ps(ps[imax]))
			imax = i;
	return ps[imax];
}
void xuat_phan_so(struct PHANSO a)
{
	printf("%d/%d ", a.tu, a.mau);
}
double gia_tri_ps(struct PHANSO a)
{
	return double(a.tu)/a.mau;
}
void xuat_day_phan_so(struct PHANSO ps[], int n)
{
	for(int i=0; i<n; i++)
		printf("%d/%d ", ps[i].tu, ps[i].mau);
}
void nhap_day_phan_so(struct PHANSO ps[], int n)
{
	for(int i=0; i<n; i++)
		scanf("%d%d", &ps[i].tu, &ps[i].mau);
}
void nhap(int &n)
{
	scanf("%d", &n);
}
