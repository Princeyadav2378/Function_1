//6. Write a function to calculate the factorial of a number. (TSRS)

//standard input/output library,which provide function for intracting the user
#include<stdio.h>

//declaration of funtion take interger arg.& return integer value  
int factorial(int a);
int main()
{
	int a,fact=1;
	printf("Enter the number:\n");
	scanf("%d",&a);
	//Function call by value & assign return value to variable 'fact'
	fact=factorial(a);
	printf("factorial of %d is = %d",a,fact);
       // It indicate the main function completed successfully
	return 0;
}
int factorial(int b)
{
	int i,fact=1;
	for(i=1;i<=b;i++)
	  fact=fact*i;
	return fact;
}
