#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct DauSach
{
	char maSSach[6];
	char tenSach[30];
	char tacGia[40];
	int namXB;
	int soLuong;
};

struct BST
{
	DauSach s;
	BST *left;
	BST *right;
	BST *parent;
};

int main()
{
	BST *T;
	init(T);
	
	
	
	
	return 0;
}
void themDauSach(BST *T)
{
	
}
void themDauSachVaoBST(BST** T, DauSach s)
{
	if (TREE_SEARCH(*T, s) != NULL)
	{
		printf("Node da ton tai!!!");
		return;
	}
	BST* x, * y, * z;
	z = (BST*)malloc(sizeof BST);
	z->key = value; z->left = NULL; z->right = NULL;
	y = NULL;
	x = *T;
	while (x != NULL)
	{
		y = x;
		if (z->key < x->key)
			x = x->left;
		else
			x = x->right;
	}
	z->parent = y;
	if (y == NULL) // Tree is empty
		*T = z;
	else if (z->key < y->key)
		y->left = z;
	else
		y->right = z;
}

int kiemTraTrung(BST *T, DauSach s)
{
	BST *p;
	p = T;
	if (p == NULL)
		return 0;
	else
	{
		if (soSanhMaSSach(s->maSSach, T->s.maSSach) < 0)
			kiemTraTrung(p->left, x);
		else if (soSanhMaSSach(s->maSSach, T->s.maSSach) > 0)
			isExist(p->right, x);
		else
			return p;
	}
	
	while (T != NULL && T->key != s.maSSach)
	{
		if (soSanhMaSSach(s->maSSach, T->s.maSSach) < 0)
			T = T->left;
		else if
			T = T->right;
	}
}
BST* TREE_SEARCH(BST* T, int k)
{
	while (T != NULL && T->key != k)
	{
		if (k < T->key)
			T = T->left;
		else
			T = T->right;
	}
	return T;
}
int soSanhMaSSach(DauSach a, DauSach b)
{
	return strcmp(a.maSSach, b.maSSach); // a = b 0; a > b 1; a <b -1
}
void init(BST *&T)
{
	T = NULL;
}
