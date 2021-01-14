#include <stdio.h>

void reverse(int *arr, int s){
	int temp;
	int i;
	for(i=0;i<(s/2);i++){
		temp = arr[i];
		arr[i] = arr[s-i-1];
		arr[s-i-1] = temp; 
	}
}

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int ar[] = {1,2,3,4,5,6,437};
//	int f = 44,g = 454;	
	reverse(ar,7);

	int u;

	for(u=0;u<7;u++){
		printf("The value of array is %d\n",ar[u]);	
	}
	
	return 0;
}

















