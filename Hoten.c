#include<stdio.h>
#include<string.h>

int main() {
	int MSSV;
	printf("Nhap ma sinh vien: ");
	scanf("%d", &MSSV);
	char HoTen[30];
	printf("\nNhap ten cua ban: ");
	//scanf("%s", &HoTen);
	 //Dùng scanf không phù hợp cho dòng này
	 //Trước khi thực hiện lệnh dưới cần làm sạch bộ nhớ đệm.
	fflush(stdin);
	gets(HoTen);
	printf("\nTen cua you: %s va co do dai  %d",HoTen, strlen(HoTen));
	return 0;
}