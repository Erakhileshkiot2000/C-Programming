#include<stdio.h>
#include<conio.h>
int main(){
	int num,i=2;
	printf("Enter the number to check wether it is even or odd : \n");
	scanf("%d",&num);
	if(num%i==0){
		printf("The number %d is a even number",num);
	}else{
		printf("The given  number %d is not a even  number it is a odd number",num);
	}
	return 1;
}
