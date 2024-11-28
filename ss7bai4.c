#include <stdio.h>

int main() {
    int n;
    const int MAX_SIZE = 100; 
    int array[MAX_SIZE];
    printf("Nhap so phan tu cua mang (toi da %d): ", MAX_SIZE);
    scanf("%d", &n);
    if (n <= 0 || n > MAX_SIZE) {
        printf("So phan tu phai nam trong khoang 1 den %d.\n", MAX_SIZE);
        return 1;
    }
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Mang vua nhap la:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: %d\n", i + 1, array[i]);
    }

    return 0;
}

