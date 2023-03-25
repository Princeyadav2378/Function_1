/* 8. Write a function to calculate the number of arrangements one can make from n items 
and r selected at a time. (TSRS)*/

#include<stdio.h>
int factorial(int n);
int permutation(int n,int r);
//declartaion of function
int main()
{
	int n,r,result;
	printf("Enter two Number:\n");
	scanf("%d %d",&n,&r);
	result=permutation(n,r);
	
	printf("Permutation of %dP%d = %d",n,r,result);
	return 0;
}
int permutation(int n,int r)
{
	int result;
	result=factorial(n)/factorial(n-r); 
	return result;
}
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	fact=fact*i;
	return fact;
}
