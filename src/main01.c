#include <stdio.h>

int function1(int *argA){
	*argA = *argA + 1;
  *argA = *argA + 1;
}


int function2(int *argB){
  *argB = *argB + 1;
}

int main(void){
	printf("Hellow world!\n");
	return 0;
}

