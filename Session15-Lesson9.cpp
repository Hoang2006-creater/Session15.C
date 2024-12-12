#include <stdio.h>
#include <string.h>

void xoa_ky_tu(char str[], char ch) {
    int i, j = 0;
    int do_dai = strlen(str);
    
    // Duyet qua tung ky tu trong chuoi
    for (i = 0; i < do_dai; i++) {
        // Neu ky tu khong phai la ky tu can xoa, giu lai
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    // Them ky tu null ('\0') vao cuoi chuoi moi
    str[j] = '\0';
}

int main() {
    // Khai bao va gan gia tri cho chuoi bat ky
    char str[] = "hello world";
    char ch;
    
    // Yeu cau nguoi dung nhap ky tu can xoa
    printf("Nhap mot ky tu: ");
    scanf("%c", &ch);  // Doc ky tu tu ban phim
    
    // Goi ham de xoa ky tu do khoi chuoi
    xoa_ky_tu(str, ch);
    
    // In ket qua
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ch, str);

    return 0;
}

