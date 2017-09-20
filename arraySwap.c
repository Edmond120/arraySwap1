#include <stdio.h>

int main(){
	srand(time(NULL));
	int ary[10];
	int i;
	for(i = 0;i < 10;i++){
		ary[i] = rand();
	}
	int ary2[10];
	int * pointer;
	int i2 = 0;
	for(i = 9;i >= 0;i--){
		pointer = &ary[i];
		ary2[i2++] = *pointer;
	}
	for(i = 0;i < 10;i++){
		printf("ary[%d]: %d\n",i,ary[i]);
	}
	printf("\n");
	for(i = 0;i < 10;i++){
		printf("ary2[%d]: %d\n",i,ary2[i]);
	}
	return 0;
}
