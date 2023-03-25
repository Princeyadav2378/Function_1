/*3. Write a function to check whether a given number is even or odd. Return 1 if the 
number is even, otherwise return 0. (TSRS) */
#include<stdio.h>
int check_even_odd(int a);
int main()
{
	int d,c;
	printf("Enter the Number:");
	scanf("%d",&c);
	d=check_even_odd(c);
	if(d==1)
	    printf("%d is Even Number",c);
	else
	    printf("%d is Odd Number",c); 
  return 0;
}
int check_even_odd(int a)
{
      if(a%2==0)
         return 1;
      else
        return 0;
      

}

