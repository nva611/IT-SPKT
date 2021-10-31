#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct GiaiThuong
{
	char tenGT[30];
	int namGT;
};
struct DauSach
{
	char maSSach[7];
	char tenSach[30];
	char tacGia[30];
	int namXB;
	int soLuongSach;
	int soLuongGT;
	GiaiThuong *gt = NULL;
};

struct BST
{
	DauSach data;
	BST *left;
	BST *right;
	BST *parent;
};


void themDauSachVaoBST(BST** T, DauSach data);
void duyetGiua(BST *x);
void xuatThongTinDS(DauSach data);
int soSanhMaSSach(DauSach a, DauSach b);
void init(BST *&T);
void taoBSTDauSach(BST *&T);
void menu();
void sapXepTheoNam(DauSach ds[], int n);
void duyetGiua2(BST *x,char k[], DauSach ds[], int &n);
void tongSoSach(BST *T, int &tong);
void themSachCoThuong(BST *&T);
void nhapSachCoThuong(DauSach &s);
void xuatThongTinGiaiThuong(BST *T, char mss[]);
DauSach* timDauSachTheoMaSSach(BST *T, char mss[]);

int main()
{
	
	
	
	menu();
	
	
	return 0;
}
void menu()
{
	DauSach ds[100];
	int n, tongSach;
	BST *T;
	init(T);
	int luaChon;
	char s[30], mss[7];
	int i;
	while(1)
	{
		
		system("cls");
		printf("1. Nhap vao mot BST cac dau sach\n");
		printf("2. Nhap vao ten cua sach, va in thong tin theo thu tu tang dan cua NamXB\n");
		printf("3. Tong so sach co trong thu vien\n");
		printf("4. Nhap MaSSach them thong tin giai thuong\n");
		printf("5. Nhap MaSSach, in thong tin cac giai thuong\n");
		printf("6. Nhap MaSSach va xoa dau sach do\n");
		printf("7. Nhap nam va ten tac gia, de in MaSSach, TenSach\n");
		printf("8. Luu danh sach vao dia\n");
		printf("9. Mo file da co tren dia\n");
		printf("Moi ban nhap lua chon: ");
		scanf("%d", &luaChon);
		fflush(stdin);
		
		switch(luaChon)
		{
			case 1:
				taoBSTDauSach(T);
				break;
			case 2:
				n = 0;
				printf("Nhap ten sach can tim: ");
				gets(s);
				duyetGiua2(T, s, ds, n);
				sapXepTheoNam(ds, n);
				for(i=0;i<n;i++)
				{
					xuatThongTinDS(ds[i]);
				}
				break;
			case 3:
				tongSach = 0;
				tongSoSach(T, tongSach);
				printf("So sach co trong thu vien la: %d\n", tongSach);
				break;
			case 4:
				
				themSachCoThuong(T);
				break;
			case 5:
				printf("Nhap ma so sach: ");
				fflush(stdin);
				gets(mss);
				xuatThongTinGiaiThuong(T, mss);
				break;
			case 0:
				duyetGiua(T);
				break;
		}
		
		system("pause");
	}
}
void xuatThongTinGiaiThuong(BST *T, char mss[])
{
	int i;
	DauSach *p = timDauSachTheoMaSSach(T, mss);
	if(p->gt!=NULL)
	{
		for(i = 0; i<p->soLuongGT; i++)
		{
			printf("Ten giai thuong %s\n", p->gt[i].tenGT);
			printf("Nam nhan giai %d\n", p->gt[i].namGT);
		}
	}
	else
		printf("Khong co giai thuong\n");
}
void nhapSachCoThuong(DauSach &s)
{
	char tenGT[30];
	int i;
	printf("Nhap so giai thuong: ");
	scanf("%d", &s.soLuongGT);
	s.gt = (GiaiThuong*)malloc(s.soLuongGT*sizeof(GiaiThuong));
	if(s.gt == NULL)
	{
		printf("Het bo nho\n");
		return;
	}
	for(i = 0; i<s.soLuongGT; i++)
	{
		printf("Nhap ten giai thuong: ");
		fflush(stdin);
		gets(s.gt[i].tenGT);
		
		printf("Nhap nam nhan giai thuong: ");
		scanf("%d", &s.gt[i].namGT);
	}
}
void themSachCoThuong(BST *&T)
{
	char mss[7];
	DauSach *p;
	printf("Nhap ma sach co thuong: ");
	gets(mss);
	p = timDauSachTheoMaSSach(T, mss);
	if(p==NULL)
	{
		printf("Khong tim thay ma so sach ban da nhap\n");
		return;
	}
	nhapSachCoThuong(*p);
	printf("Them thong tin thanh cong");
}
DauSach* timDauSachTheoMaSSach(BST *T, char mss[])
{
	DauSach *p = NULL;
	while (T != NULL && strcmp(T->data.maSSach, mss) != 0)
	{
		if (strcmp(mss, T->data.maSSach) < 0)
			T = T->left;
		else
			T = T->right;
	}
	p = &T->data;
	return p;
}
void duyetGiua2(BST *x,char k[], DauSach ds[], int &n)
{
	if (x != NULL) 
	{
		duyetGiua2(x->left,k, ds, n);
		if(strcmp(x->data.tenSach, k)==0)
		{
			ds[n]=x->data;
			n++;
		}
		duyetGiua2(x->right, k, ds, n);
	}
}
void sapXepTheoNam(DauSach ds[], int n)
{
	int i, j;
	DauSach t;
	for (i = 1 ; i < n ; i++ )
	{
		j = i; 
		t = ds[j];
		while ( j > 0 && t.namXB < ds[j-1].namXB ) 
		{
			ds[j] = ds[j-1];
			j--;
		}
		ds[j] = t;
	}
} 

void taoBSTDauSach(BST *&T)
{
	DauSach s1;
	strcpy(s1.maSSach, "mss001"); s1.namXB = 2020; s1.soLuongSach = 120; strcpy(s1.tacGia, "A1"); strcpy(s1.tenSach, "S1");
	DauSach s3;
	strcpy(s3.maSSach, "mss003"); s3.namXB = 2023; s3.soLuongSach = 123; strcpy(s3.tacGia, "A3"); strcpy(s3.tenSach, "S3");
	DauSach s4;
	strcpy(s4.maSSach, "mss004"); s4.namXB = 2000; s4.soLuongSach = 140; strcpy(s4.tacGia, "A4"); strcpy(s4.tenSach, "S3");
	DauSach s2;
	strcpy(s2.maSSach, "mss002"); s2.namXB = 2220; s2.soLuongSach = 122; strcpy(s2.tacGia, "A2"); strcpy(s2.tenSach, "S3");
	
	themDauSachVaoBST(&T, s1);
	themDauSachVaoBST(&T, s3);
	themDauSachVaoBST(&T, s4);
	themDauSachVaoBST(&T, s2);
}

void tongSoSach(BST *T, int &tong)
{
	if (T != NULL) 
	{
		tongSoSach(T->left, tong);
		tong += T->data.soLuongSach;
		tongSoSach(T->right, tong);
	}
}
void themDauSachVaoBST(BST** T, DauSach data)
{
	BST* x, * y, * z;
	z = (BST*)malloc(sizeof(BST));
	z->data = data; z->left = NULL; z->right = NULL;
	y = NULL;
	x = *T;
	while (x != NULL)
	{
		y = x;
		if (soSanhMaSSach(z->data, x->data) < 0)
			x = x->left;
		else
			x = x->right;
	}
	z->parent = y;
	if (y == NULL) // Tree is empty
		*T = z;
	else if (soSanhMaSSach(z->data, y->data) < 0)
		y->left = z;
	else
		y->right = z;
}
void duyetGiua(BST *x)
{
	if (x != NULL) 
	{
		duyetGiua(x->left);
		xuatThongTinDS(x->data);
		duyetGiua(x->right);
	}
}
void xuatThongTinDS(DauSach data)
{
	printf("Ma sach: %s\n", data.maSSach);
	printf("Ten sach: %s\n", data.tenSach);
	printf("Tac gia: %s\n", data.tacGia);
	printf("Nam xuat ban: %d\n", data.namXB);
	printf("SL: %d\n", data.soLuongSach);
}
int soSanhMaSSach(DauSach a, DauSach b)
{
	return strcmp(a.maSSach, b.maSSach); // a = b 0; a > b 1; a <b -1
}
void init(BST *&T)
{
	T = NULL;
}
