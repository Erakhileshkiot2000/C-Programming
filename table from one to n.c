#include<stdio.h>
#include<conio.h>
int main(){
	int num,i,j,mul = 0;
	printf("Enter the number where you want to print the table :  ");
	scanf("%d",&num);
	for (i = 1;i<=num;i++){
		for(j=1;j<=10;j++){
			mul = i*j;
			printf("%d",mul);
			printf("\t");
		}
	printf("\n");	
	}
	return 0;
}
