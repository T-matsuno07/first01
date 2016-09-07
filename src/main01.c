#include <stdio.h>

int function1(int *argA){
	*argA = *argA + 1;	
}

int main(void){
	printf("Hellow world!\n");
	return 0;
}