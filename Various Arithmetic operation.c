#include<stdio.h>
#include<math.h>
int add(int x, int y){
	int sum;
	sum = x+y;
	return sum;
}
int subtraction(int x, int y){
	int sub;
	sub = x-y;
	return sub;
}
int division(int x, int y){
	int div;
	div = x/y;
	return div;
}
int multiplication(int x, int y){
	int mul;
	mul = x*y;
	return mul;
}
int power(int x, int y){
	int z;
	z = pow(x,y);
	return z;
}
int squareroot(int x){
	int sqart;
//	sum = x+y;
	return sqrt(x);
}
int main(){
	int a,b;
	printf("Enter the two no to perform the operation");
	scanf("%d %d",&a,&b);
	printf("\n the addition %d and %d is :  %d",a,b,add(a,b));
	printf("\n the subtraction  %d and %d is : %d",a,b,subtraction(a,b));
	printf("\n the multiplication %d and %d is : %d",a,b,multiplication(a,b));
	printf("\n the division %d and %d is : %d",a,b,division(a,b));
	printf("\n the %d to the power of %d  is :  %d",a,b,power(a,b));
	printf("\n the square root  of %d  is : %d",a,squareroot(a));
	return 0;
}
