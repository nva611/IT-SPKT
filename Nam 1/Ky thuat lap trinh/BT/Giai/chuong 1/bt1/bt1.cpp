/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Students nhap(Students *a); 
void xuat(struct Students a); //struc hay khong struct gi cung duoc
struct Students
{
	char name[31];
	char MSSV[6];
	int d, m, y;
	char address[51];
	char sex[4];
	double score;
};
void main()
{
	int n;
	printf("Nhap so sv: ");
	scanf("%d", &n);
	fflush(stdin);
	Students *p;
	p = (struct Students*)malloc(n*sizeof(struct Students));
	for(int i=0; i<n; i++)
		{
			printf("Nhap thong tin sv %d\n", i+1);
			nhap((p+i));
		}
	for(i=0; i<n; i++)
		xuat(*(p+i));
	int dem=0;
	for(i=0; i<n; i++)
		if((*(p+i)).score>=5)
			dem++;
	printf("Co %d sinh vien dat", dem);
}
struct Students nhap(Students *a)
{
	
	fflush(stdin);

	printf("MSSV: ");
	scanf("%[^\n]%*c", (*a).MSSV);


	printf("Ho va ten: ");
	scanf("%[^\n]%*c", (*a).name);


	printf("Sinh: "); 
	scanf("%d%d%d", &a->d, &a->m, &a->y);


	printf("Dia chi: ");
	fflush(stdin);
	scanf("%[^\n]%*c", (*a).address);


	printf("Gioi tinh: ");
	scanf("%[^\n]%*c", (*a).sex);

	printf("Diem tb: ");
	scanf("%lf", &a->score);

	return *a;
}
void xuat(struct Students a)
{
	printf("____________________________________________________________\n");
	printf("MSSV: %s\n", a.MSSV);
	printf("Ho va ten: %s\n", a.name);
	printf("Gioi tinh: %s\n", a.sex);
	printf("Sinh ngay %d thang %d nam %d \n", a.d, a.m, a.y);
	printf("Dia chi: %s\n", a.address);
	printf("Diem tb: %lf\n", a.score);
	printf("_____________________________________________________________\n\n\n");
}
*/

#include <stdio.h>
 
void main(){
    int age;
    char name[30];
    printf("\nNhap tuoi: "); scanf("%d", &age);
    getchar(); // d?c ký t? '\n'
    printf("\nNhap ten: "); fgets(name, sizeof name, stdin);
    printf("%s - %d", name, age);
}