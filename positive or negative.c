#include<stdio.h>
#include<conio.h>
int main(){
	int num;
	printf("Enter the num to check it is positive or negative : ");
	scanf("%d",&num);
	if(num>0){
		printf("the given number %d is positive",num);
	}else if(num<0){
		printf("the given number %d is negative",num);
	}else if(num == 0){
		printf("the given number %d is zero",num);
	}
}
