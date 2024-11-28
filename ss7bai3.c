#include <stdio.h>

int main() {
    int array[5];
    printf("Nhap 5 phan tu cho mang:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Mang vua nhap la:\n");
    for (int i = 0; i < 5; i++) {
    	if (array[i]%2==0){
    		printf("Phan tu thu %d: %d\n", i + 1, array[i]);
		}
    }
    for (int i = 0; i < 5; i++) {
    	if (array[i]%2!=0){
    		printf("mang nay k co so chan");
    		break;
		}
}
    return 0;
}

