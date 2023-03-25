//2. Write a function to calculate simple interest. (TSRS)
#include <stdio.h>
float simple_interest(float principle, float rate, int time);

int main()
{
    float principle, rate, interest;
    int time;

    printf("Enter the principle, rate, and time:\n");
    scanf("%f%f%d", &principle, &rate, &time);

    interest = simple_interest(principle, rate, time);

    printf("Simple interest for principle %.2f, rate %.2f, and time %d is %.2f\n",principle, rate, time, interest);
    return 0;
}

float simple_interest(float principle, float rate, int time)
{
    float interest = (principle * rate * time) / 100;
    return interest;
}
