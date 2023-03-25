// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)
#include<stdio.h>
int contain_digit(int num,int digit);
int main()
{
	int num,digit,check;
	printf("Enter two Number:\n");
	scanf("%d%d",&num,&digit);
	check=contain_digit(num,digit);
	if(check==1)
	   printf("%d is Contains digit %d ",num,digit);
	else
	   printf("%d is Not Contains digit %d ",num,digit);
	return 0;
}
int contain_digit(int num,int digit)
{
	while(num!=0)
	{
	  int rem=num%10;
	  if(rem==digit)
	  {
	  	return 1;  // Found digit
	  }
	   num=num/10;
	}
    return 0;  //NOt found digit
	
}

 
