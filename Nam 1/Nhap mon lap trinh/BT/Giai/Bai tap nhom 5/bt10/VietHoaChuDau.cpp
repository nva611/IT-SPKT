#include <stdio.h>
#include <string.h>
void VietHoaChuCaiDau(char S[]);
void xuat(char S[]);
void main()
{
	char S[1000];
	char D[30];
//	scanf("%s", D);
//	printf("%s", D);
	gets(S);
	VietHoaChuCaiDau(S);
	xuat(S);
}
void VietHoaChuCaiDau(char S[])
{
	int len = strlen(S);
	if (S[0]>='a' && S[0]<='z')
		S[0] -= 32;
	for(int i=0; i<len; i++)
		if(S[i]==' ' && S[i+1]>='a' && S[i+1]<='z')
			S[i+1] -= 32;
}
void xuat(char S[])
{
	printf("%s", S);
}
/*#include <stdio.h>
#include <string.h>
struct SinhVien
{
	char name[30];
	int age;
	char uni[100];
	char phone[12];
};
void main()
{
	struct SinhVien sv1;
	printf("Ten: ");
	gets(sv1.name);
	printf("Tuoi: ");
	scanf("%d", &sv1.age);
	printf("Ten truong: ");
	gets(sv1.uni);
	printf("So dien thoai: ");
	gets(sv1.phone);
	printf("Thong tin cua ban la: ten %s, %d tuoi, sinh vien truong %s, so dien thoai la %s", sv1.name, sv1.age, sv1.uni, sv1.phone);
}*/