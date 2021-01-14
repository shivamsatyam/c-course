#include <stdio.h>
#include<stdlib.h>
int main(){
//malloc stands for memory allocation it takes number of bytes to be allocated as an input and returns
//a pointer of type void and for unsuccessful condition it return NULL
//		
//	Syntax = (int*)malloc(30*sizeof(int));
//(int*) => casting void pointer to int
//30* => spaces for 30 ints
//sizeof(int) => return size of 1 int			
							
		
		
	int *ptr;
	ptr = (int *)malloc(6*sizeof(int)); //6* size of int	
	int i;
	for(i=0;i<6;i++){
		printf("Enter the number \n");
		scanf("%d",&ptr[i]);
	}	
	for(i=0;i<6;i++){
		printf("The element are %d\n",ptr[i]);
		
	}	
	
	
		
	return 0;
}


































