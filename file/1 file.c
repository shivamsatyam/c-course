#include<stdio.h>

	
	/*
	"r" = > open for reading     // if the file does not exist it returns null
	"rb" => open for reading in binary;	
	"w" => open for writing				// if the file exists the content will be overwrite and also generate
	"wb" => open for writing in binary // if the file exists the content will be overwrite and also generate
	"a" => open for append       // if the does not exist it create 
	*/
	
	/*
	types of file
	text file => .txt
	binary file => .dat
	
	*/
	
int main(){
	FILE *ptr;
	int num;
	int num1;
	int num2;
	ptr  = fopen("example.txt","r"); //reading the file
//	ptr  = fopen("example.txt","w"); //writing the file
	
	fscanf(ptr,"%d",&num);//reads the first integer in the file
	printf("The first integer read by the C programme is %d\n",num);	
	fscanf(ptr,"%d",&num1);//reads the second integer in the file
	printf("The second integer read by the C programme is %d\n",num1);	

	fclose(ptr);	
	return 0;
}





















