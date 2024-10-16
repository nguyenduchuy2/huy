#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool kiemTraDoiXung(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    gets(str);// Ð?c chu?i t? ngu?i dùng

    if (kiemTraDoiXung(str)) {
        printf("Chuoi '%s' la chuoi doi xung.\n", str);
    } else {
        printf("Chuoi '%s' khong la chuoi doi xung.\n", str);
    }

    return 0;
}

