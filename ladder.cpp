#include<stdio.h>
int main(){
	int sal;
	float tax;
	printf("Enter salary.....");
	scanf("%d", &sal);
	if(sal<=10000){
		printf("no tax");
	}
	else if(sal>10000 && sal<=20000){
		tax=(0.10*sal);
		printf("tax %f", tax);
	}
	else if(sal>20000 && sal<=30000){
		tax=(0.20*sal);
		printf("tax %f", tax);
	}
	else{
		tax=(0.25*sal);
		printf("tax %f", tax);
	}
}
