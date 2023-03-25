//5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void odd_natural_number(int a);
int main()
{	
      int a;
      printf("Enter the Number:");
      scanf("%d",&a);
      odd_natural_number(a);
      return 0;
}
void odd_natural_number(int b)
{
	int i;
	for(i=1;i<=b;i=i+2)
	{
		printf("%d\n",i);
	}
}
