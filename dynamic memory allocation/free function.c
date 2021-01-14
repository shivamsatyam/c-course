#include <stdio.h>
#include<stdlib.h>
int main(){

//free() function is used to de allocate the memory;
//the memory allocated using calloc or malloc is not deallocated automatically
//
//Syntax => free(ptr);
//ptr is a poiner given by malloc or calloc
	
	int *ptr;
	ptr = (int *)malloc(6000000*sizeof(int));
	int i;
	for(i=0;i<600;i++){
		printf("Enter the name\n");
		scanf("%d",&ptr[i]);
		free(ptr);
	}
	
	
	
		
	return 0;
}


































