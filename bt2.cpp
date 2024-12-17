#include <stdio.h>

int main() {
    int so_duoc_chon = 10;  
    int so_nhap;

    do {
        printf("Nhap mot so nguyen: ");
        scanf("%d", &so_nhap);

        if (so_nhap == so_duoc_chon) {
            printf("Ban da nhap dung so. Ket thuc truong trinh.\n");
        } else {
            printf("So khong trung. Thu lai.\n");
        }
    } while (so_nhap != so_duoc_chon);

    return 0;
}
