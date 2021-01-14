#include<stdio.h>
#include<stdlib.h>


int main(){
	int *ptr = (int *)malloc(7*sizeof(int));
	ptr[0] = 12;
	ptr[1] = 22;
	ptr[2] = 32;
	ptr[3] = 42;
	ptr[4] = 52;
		
	free(ptr); //ptr is now a dangling pointer
	
		
	
}






















