#include <stdio.h>
#include <math.h>
int main()
{
    int num1,num2,sum,diff,rem;
    float avg;
    double product,divide;
    printf("Enter to two numbers\n");
    scanf("%d\n%d",&num1,&num2);
    sum=num1+num2;
    diff=abs(num1-num2);
    avg=sum/2;
    product=num1*num2;
    divide=num1/num2;
    rem=num1%num2;
    printf("\nSum of the numbers is %d",sum);
    printf("\nDifference of two numbers is %d",diff);
    printf("\nAverage of two numbers is %f",avg);
    printf("\nProduct of the numbers %lf",product);
    printf("\nThe quotient when first number is divded by second %lf",divide);
    printf("\nThe remainder when first number is divded by second %d",rem);
    return 0;
}
