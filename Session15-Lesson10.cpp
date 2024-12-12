#include <stdio.h>
#include <string.h>

void dem_ky_tu(char str[]) {
    int i, j;
    int do_dai = strlen(str);
    int dem[256] = {0};  // Mang de dem so lan xuat hien cua cac ky tu

    // Duyet qua tung ky tu trong chuoi va dem tan suat xuat hien
    for (i = 0; i < do_dai; i++) {
        dem[(int)str[i]]++;  // Tang so lan xuat hien cua ky tu str[i]
    }

    // In ra cac ky tu va so lan xuat hien
    printf("Cac ky tu va so lan xuat hien:\n");
    for (i = 0; i < 256; i++) {
        if (dem[i] > 0) {
            printf("Ky tu '%c' xuat hien %d lan\n", i, dem[i]);
        }
    }
}

int main() {
    // Khai bao va gan gia tri cho chuoi bat ky
    char str[] = "This is my phoneee";

    // Goi ham de dem so lan xuat hien cua tung ky tu trong chuoi
    dem_ky_tu(str);

    return 0;
}

