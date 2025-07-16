#include<stdio.h>
int main(){
	FILE *ptr;
	ptr=fopen("getcdemo.txt", "r");
	printf("The value of my character is %c\n", fgetc(ptr));
	printf("The value of my character is %c\n", fgetc(ptr));
	printf("The value of my character is %c\n", fgetc(ptr));
	printf("The value of my character is %c\n", fgetc(ptr));
	printf("The value of my character is %c\n", fgetc(ptr));
	printf("The value of my character is %c\n", fgetc(ptr));
	printf("The value of my character is %c\n", fgetc(ptr));
	printf("The value of my character is %c\n", fgetc(ptr));
	fclose(ptr);
	return 0;
}
