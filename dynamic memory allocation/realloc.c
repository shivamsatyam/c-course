#include <stdio.h>
#include<stdlib.h>
int main(){

//realloc() function => Sometimes the dynimically allocated memory is insufficient or more than required
//realloc is used to allocate memory of new size using the previous pointer and size;
//	syntax => ptr = realloc(ptr,newsize);
//			  ptr = realloc(ptr,3*sizeof(int));
//			                    ptr no points to this new block of memory capable of storing 3 intergers 		
//	
	
		
				
		
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
	
	// Reallocating the ptr vointer
	ptr = realloc(ptr,10*sizeof(int));
	for(i=0;i<10;i++){
		printf("Enter the number \n");
		scanf("%d",&ptr[i]);
	}	
	for(i=0;i<10;i++){
		printf("The element are %d\n",ptr[i]);
		
	}	
	
	
		
	return 0;
}


































