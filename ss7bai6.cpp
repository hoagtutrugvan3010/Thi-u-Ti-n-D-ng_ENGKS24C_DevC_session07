#include <stdio.h>

	int main() {
    	int array[5] = {1, 2, 3, 4, 5};
    	for (int i = 0; i < 5; i++) {
       		 if (array[i] % 2 != 0) {
           		 array[i] += 2; 
        }	 else {
           		 array[i] += 3; 
        }
    }
    		printf("Mang sau khi thay doi la:\n");
    	for (int i = 0; i < 5; i++) {
        	printf("Phan tu thu %d: %d\n", i + 1, array[i]);
    }

    		return 0;
}

