#include <stdio.h>

int main() {
    // Khai báo m?ng s? nguyên có 5 ph?n t?
    int array[5];

    // Yêu c?u ngu?i dùng nh?p t?ng ph?n t?
    printf("Nhap 5 phan tu cho mang:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // In ra m?ng sau khi nh?p
    printf("Mang vua nhap la:\n");
    for (int i = 0; i < 5; i++) {
        printf("Phan tu thu %d: %d\n", i + 1, array[i]);
    }

    return 0;
}

