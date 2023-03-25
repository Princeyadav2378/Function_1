/* 10. Write a function to print all prime factors of a given number. For example, if the 
number is 36 then your result should be 2, 2, 3, 3. (TSRN) */
#include<stdio.h>
void prime_factor(int n);
int main()
{
	int n;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	prime_factor(n);
	return 0;
}
void prime_factor(int n)
{
	int i;
	for(i=2;n>1;i++)
	{
		while(n%i==0)
		{
			printf(" %d",i);
			n=n/i;
		}
	}
}
