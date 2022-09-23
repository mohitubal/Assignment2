//Q1. Write a recursive function to calculate sum of first N natural numbers.

#include<stdio.h>
int num(int);
int main()
{
    int n1;
    printf("Enter the number");
    scanf("%d",&n1);
    printf("The first n natural numbers are %d",num(n1));

    printf("\n");
    return 0;
}

int num(int n1)
{
    if(n1 != 0)
        return n1 + num(n1-1);
    else
        return n1;
    
}

//Q2. Write a recursive function to calculate sum of first N odd natural numbers.


#include<stdio.h>
int num(int);
int main()
{
    int n1;
    printf("Enter the number");
    scanf("%d",&n1);
    printf("The first n natural numbers are %d",num(n1));

    printf("\n");
    return 0;
}

int num(int n1)
{
    if(n1 == 1)
         return n1;
    
    return ((2*n1 - 1) + num(n1-1));
    
}

//Q3. Write a recursive function to calculate sum of first N even natural numbers.


#include<stdio.h>
int num(int);
int main()
{
    int n1;
    printf("Enter the number");
    scanf("%d",&n1);
    printf("The first n natural numbers are %d",num(n1));

    printf("\n");
    return 0;
}

int num(int n1)
{
    if(n1 != 0)
        return ((2*n1) + num(n1-1));
     return n1;
    
}

//Q4. Write a recursive function to calculate sum of squares of first n natural numbers.


#include<stdio.h>
int num(int);
int main()
{
    int n1;
    printf("Enter the number");
    scanf("%d",&n1);
    printf("The first n natural numbers are %d",num(n1));

    printf("\n");
    return 0;
}

int num(int n1)
{
    if(n1 != 1)
    
        return ((n1*n1) + num(n1-1));
     return n1;
}

//Q5. Write a recursive function to calculate sum of digits of a given number.

#include<stdio.h>
int num(int);
int main()
{
    int n1;
    printf("Enter the number");
    scanf("%d",&n1);
    printf("Sum of digit of given numbers are %d",num(n1));

    printf("\n");
    return 0;
}

int num(int n1)
{
    if(n1 != 0)
    
        return num(n1/10) + n1%10;
     return n1;
}

//Q6. Write a recursive function to calculate factorial of a given number.

#include<stdio.h>
int num(int);
int main()
{
    int n1;
    printf("Enter the number");
    scanf("%d",&n1);
    printf("Factorial of given numbers are %d",num(n1));

    printf("\n");
    return 0;
}

int num(int n1)
{
    if(n1 != 1)
    
        return n1 * num(n1-1);
     return n1;
}

//Q7. Write a recursive function to calculate HCF of two numbers.

#include<stdio.h>
int hcf(int,int);
int main()
{
    int n1,n2,result;
    printf("Enter the two number");
    scanf("%d  %d",&n1,&n2);
    result = hcf(n2,n1%n2);
    printf("%d", result);

    printf("\n");
    return 0;
}

int hcf(int n1,int n2)
{
    if(n2 == 0)
        return n1;
    hcf(n2,n1%n2);
    
}

//Q8. Write a recursive function to print first N terms of Fibonacci series.

#include<stdio.h>
int fib(int);
int main()
{
    int n1,i;
    
    printf("Enter the number");
    scanf("%d",&n1);
    for(i = 0 ; i <= n1 ; i++)
    printf("%d ",fib(i));
    printf("\n");
    return 0;
}

int fib(int n1)
{
    
    if(n1 == 0 || n1 ==1)
        return n1; 
return fib(n1-1)+fib(n1-2);    
        
}

//Q9. Write a program in C to count the digits of a given number using recursion.

#include <stdio.h>
int countDigits(int num)
{
    static int count=0;
    if(num>0)
    {
        count++;
        countDigits(num/10);
    }
    else
    {
        return count;
    }
}
int main()
{
    int number, count=0;
    printf("Enter a positive integer number: ");
    scanf("%d",&number);
    count=countDigits(number);
     
    printf("Total digits in number %d is: %d\n",number,count);
    return 0;
}

//Q10. Write a program in C to calculate the power of any number using recursion.

#include <stdio.h>
int power(int n1, int n2);
int main() {
    int base, a, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    return 0;
}

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}