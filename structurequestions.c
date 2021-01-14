//12.51.19

#include <stdio.h>
#include<string.h>

struct vector{
	int x;
	int y;
	
};

struct vector sum(struct vector v1,struct vector v2){
	struct vector result;
	result.x = v1.x+v2.x;
	result.y = v2.x+v2.y;
	printf("The sum of X is %d and sum of Y is %d",result.x,result.y);
};

int main(){
	struct vector v1,v2,sums;
	v1.x = 5;	
	v1.y = 56;
	printf("The X dimension is %d and y dimesion is %d of vector V1\n",v1.x,v1.y);

	v2.x = 54;
	v2.y = 56;
	printf("The X dimension is %d and y dimesion is %d of vector V2\n",v2.x,v2.y);
	sums = sum(v1,v2);
	
	return 0;
}

