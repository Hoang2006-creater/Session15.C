#include <stdio.h>

void capitalize_words(char str[]) {
    int i = 0;

    while (str[i] != '\0'){
        if (i == 0 || str[i - 1] == ' ') {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
        }
}
        i++;
    }
}

int main() {
    char str[] = "hello world";
    capitalize_words(str);
    printf("%s\n", str);
    return 0;
}

