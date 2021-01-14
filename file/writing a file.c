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
	ptr  = fopen("write.txt","w"); 
	fprintf(ptr,"It is written by fprintf() function");

	fclose(ptr);	
	
	
	return 0;
}





















