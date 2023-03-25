//4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void natural_number(int a);
int main()
{
	int a;
	printf("Enter the Number:");
	scanf("%d",&a);
	natural_number(a);
	return 0;
	
}
void natural_number(int a)
{
	int i;
	for(i=1;i<=a;i++)
	{
		printf("%d\n",i);
	}
}

