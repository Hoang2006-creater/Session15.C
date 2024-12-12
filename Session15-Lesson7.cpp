#include <stdio.h>

int main() {
    char str[100];
    int letterCount = 0;
    int numberCount = 0;
    int specialCount = 0;

    // Nhap chuoi tu nguoi dung
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    // Xoa ky tu xuong dong '\n' neu co
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    // Duyet qua tung ky tu trong chuoi de dem so chu cai
    for (int i = 0; str[i] != '\0'; i++) {
        // Kiem tra neu ky tu la chu cai (ca chu hoa va chu thuong)
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            letterCount++;
        }
    	else if(str[i]>= 0 && str[i]<=9){
    		numberCount++;
	}	else
	    	specialCount++;
    }
	printf("So luong ky tu la chu cai trong chuoi: %d\n ", letterCount);
	printf("So luong ky tu la so trong chuoi: %d\n ", numberCount);
	printf("So luong ky tu la ky tu dac biet trong chuoi: %d\n ", specialCount);
	
	return 0;
}
