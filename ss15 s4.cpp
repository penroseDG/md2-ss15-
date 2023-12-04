#include <stdio.h>
#include <string.h>

struct Book {
    char id[10];
    char name[50];
    char author[50];
    float price;
    char category[50];
};

int main() {
    struct Book books[100];
    int n, choice, i;
    char book_id[10];

    do {
        printf("\nMENU\n");
        printf("1. Nhap so luong v? thong tin sach.\n");
        printf("2. Hien thi thong tin sach.\n");
        printf("3. Them sach v?o vi tri.\n");
        printf("4. Xoa sach theo ma sach.\n");
        printf("5. Cap nhat thong tin sach theo ma sach.\n");
        printf("6. Sap xep sach theo gia (tang/giam).\n");
        printf("7. Tim kiem sach theo ten sach.\n");
        printf("8. Tim kiem sach theo khoang gia.\n");
        printf("9. Thoat.\n");

        printf("\nMoi ban chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nNhap so luong sach: ");
                scanf("%d", &n);

                for (i = 0; i < n; i++) {
                    printf("\nNhap thong tin sach thu %d:\n", i + 1);
                    printf("Ma s?ch: ");
                    scanf("%s", books[i].id);
                    printf("Ten sach: ");
                    scanf("%s", books[i].name);
                    printf("Tac gia: ");
                    scanf("%s", books[i].author);
                    printf("Gia tien: ");
                    scanf("%f", &books[i].price);
                    printf("The loai: ");
                    scanf("%s", books[i].category);
                }

                break;

            case 2:
                printf("\nTh?ng tin cac cuon sach:\n");
                printf("%-10s %-30s %-20s %-10s %-20s\n", "Ma s?ch", "Ten sach", "Tac gia", "Gia tien", "The loai");
                for (i = 0; i < n; i++) {
                    printf("%-10s %-30s %-20s %-10.2f %-20s\n", books[i].id, books[i].name, books[i].author, books[i].price, books[i].category);
                }

                break;

            case 3:
                printf("\nNhap thong tin sach can them:\n");
                printf("Ma sach: ");
                scanf("%s", book_id);

                for (i = 0; i < n; i++) {
                    if (strcmp(books[i].id, book_id) == 0) {
                        printf("Ten sach: ");
                        scanf("%s", books[i].name);
                        printf("Tac gia: ");
                        scanf("%s", books[i].author);
                        printf("Gia tien: ");
                        scanf("%f", &books[i].price);
                        printf("The loai: ");
                        scanf("%s", books[i].category);
                        break;
                    }
                }

                if (i == n) {
                    printf("Khong tim thay sach co ma %s.\n", book_id);
                }

                break;

            case 4:
                printf("\nNhap ma sach can xoa: ");
                scanf("%s", book_id);

                for (i = 0; i < n; i++) {
                    if (strcmp(books[i].id, book_id) == 0) {
                        for (int j = i; j < n - 1; j++) {
                            books[j] = books[j + 1];
                        }

                        n--;
                        printf("?a xoa sach co ma %s.\n", book_id);
                        break;
                    }
                }

                if (i == n) {
                    printf("Khong tim thay sach co ma %s.\n", book_id);
                }

                break;
			case 5:
                capNhatTheoMaSach();
                break;
            case 6:
                printf("Chon kieu sap xep (1: tang, 2: giam): ");
                int sapXepChoice;
                scanf("%d", &sapXepChoice);
                sapXepTheoGia(sapXepChoice);
                break;
            case 7:
                timKiemTheoTenSach();
                break;
            case 8:
                timKiemTheoKhoangGia();
                break;
            case 9:
                printf("Thoat:\n");
                inThongTinBooks();
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 9);            
    return 0; 
}
