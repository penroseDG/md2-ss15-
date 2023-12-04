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

void themSinhVien(struct SinhVien *sv, int *n, int viTri) {
    for (int i = *n - 1; i >= viTri; i--) {
        *(sv + i + 1) = *(sv + i);
    }
    nhapSinhVien(sv + viTri);
    (*n)++;
}

void suaSinhVien(struct SinhVien *sv, int n, int viTri) {
    nhapSinhVien(sv + viTri);
}

void xoaSinhVien(struct SinhVien *sv, int *n, int viTri) {
    for (int i = viTri; i < *n - 1; i++) {
        *(sv + i) = *(sv + i + 1);
    }
    (*n)--;
}

void inSinhVien(struct SinhVien *sv, int n) {
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ho ten: %s\n", (sv + i)->hoTen);
        printf("Tuoi: %d\n", (sv + i)->tuoi);
        printf("So dien thoai: %s\n", (sv + i)->soDienThoai);
        printf("Email: %s\n", (sv + i)->email);
    }
}
	return 0; 
} 
