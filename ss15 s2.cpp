#include<stdio.h>
int main(){
	struct SinhVien {
    char hoTen[50];
    int tuoi;
    char soDienThoai[20];
    char email[50];
};

void nhapSinhVien(struct SinhVien *sv) {
    printf("Nhap ho ten: ");
    scanf("%s", sv->hoTen);
    printf("Nhap tuoi: ");
    scanf("%d", &sv->tuoi);
    printf("Nhap so dien thoai: ");
    scanf("%s", sv->soDienThoai);
    printf("Nhap email: ");
    scanf("%s", sv->email);
}

void xuatSinhVien(struct SinhVien sv) {
    printf("Ho va ten: %s\n", sv.hoTen);
    printf("Tuoi: %d\n", sv.tuoi);
    printf("So dien thoai: %s\n", sv.soDienThoai);
    printf("Email: %s\n", sv.email);
}
	return 0; 
} 
