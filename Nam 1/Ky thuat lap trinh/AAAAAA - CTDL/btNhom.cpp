#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct DauSach
{
	char maSSach[7];
	char tenSach[30];
	char tacGia[30];
	int namXB;
	int soLuong;
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


int main()
{
	BST *T;
	init(T);
	
	DauSach s1;
	strcpy(s1.maSSach, "mss001"); s1.namXB = 2020; s1.soLuong = 120; strcpy(s1.tacGia, "A1"); strcpy(s1.tenSach, "S1");
	DauSach s3;
	strcpy(s3.maSSach, "mss003"); s3.namXB = 2023; s3.soLuong = 123; strcpy(s3.tacGia, "A3"); strcpy(s3.tenSach, "S3");
	DauSach s4;
	strcpy(s4.maSSach, "mss004"); s4.namXB = 2420; s4.soLuong = 140; strcpy(s4.tacGia, "A4"); strcpy(s4.tenSach, "S4");
	DauSach s2;
	strcpy(s2.maSSach, "mss002"); s2.namXB = 2220; s2.soLuong = 122; strcpy(s2.tacGia, "A2"); strcpy(s2.tenSach, "S3");
	
	themDauSachVaoBST(&T, s1);
	themDauSachVaoBST(&T, s3);
	themDauSachVaoBST(&T, s4);
	themDauSachVaoBST(&T, s2);
	
	duyetGiua(T);
	
	return 0;
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
	printf("SL: %d\n", data.soLuong);
}
int soSanhMaSSach(DauSach a, DauSach b)
{
	return strcmp(a.maSSach, b.maSSach); // a = b 0; a > b 1; a <b -1
}
void init(BST *&T)
{
	T = NULL;
}
