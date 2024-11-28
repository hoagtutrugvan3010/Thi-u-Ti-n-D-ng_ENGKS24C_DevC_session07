#include<stdio.h>
		int main(){
			int numbers[]={1,2,3,4,5};
			int a;
			int do_dai= sizeof(numbers)/sizeof(numbers[0]);
			for (a=0;a<do_dai;a++){
				printf("phan tu thu %d cua mang la: %d\n",a,numbers[a]);
			}
			printf("do dai cua mang la: %d",do_dai);
					
					
					return 0;
	}
