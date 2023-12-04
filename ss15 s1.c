#include<stdio.h>
int main(){
	struct SinhVien {
    char hoTen[50];
    int tuoi;
    char soDienThoai[20];
    char email[50];
};
    struct SinhVien sv;

    strcpy(sv.hoTen, "Nguyen Van A");
    sv.tuoi = 20;
    strcpy(sv.soDienThoai, "0123456789");
    strcpy(sv.email, "nguyenvana@gmail.com");
    
    printf("Ho va ten: %s\n", sv.hoTen);
    printf("Tuoi: %d\n", sv.tuoi);
    printf("So dien thoai: %s\n", sv.soDienThoai);
    printf("Email: %s\n", sv.email);
	return 0; 
} 
