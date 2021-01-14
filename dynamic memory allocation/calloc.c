#include <stdio.h>
#include<stdlib.h>
int main(){
//calloc stands for CONTINUOUS ALLOCATION	It initialize each memory nlock with a default value of 0		
//syntax => (float *)calloc(30,sizeof(float));
//calloc(30,sizeof(float)) => allocates continous space in memory for 30 blocks(float)
//		if the space is not sufficient memory allocation falis and a NULL pointer returns

		
	int *ptr;
	ptr = (int *)calloc(6,sizeof(int)); //it makes 6 blocks for int with default value 0  	
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


































