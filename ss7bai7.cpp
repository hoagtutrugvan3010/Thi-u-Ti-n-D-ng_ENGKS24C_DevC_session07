#include <stdio.h>

	int main() {
    	int n;
   			printf("Nhap so phan tu cua mang: ");
    		scanf("%d", &n);
    	if (n <= 0) {
        	printf("So phan tu phai lon hon 0.\n");
        return 1;
    }

   		int array[n]; 
    	for (int i = 0; i < n; i++) {
        while (1) {
            printf("Nhap phan tu thu %d (so le): ", i + 1);
            scanf("%d", &array[i]);
            if (array[i] % 2 != 0) {
                break; 
            } else {
                printf("Gia tri khong hop le! Vui long nhap so le.\n");
            }
        }
    }
    		printf("Mang cac so le vua nhap la:\n");
    	for (int i = 0; i < n; i++) {
       		printf("Phan tu thu %d: %d\n", i + 1, array[i]);
    }

    return 0;
}

