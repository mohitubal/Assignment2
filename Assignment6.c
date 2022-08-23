//Q1. Write a program to calculate sum of first N natural numbers.

#include <stdio.h>
int main()
{

    int i, sum = 0, a;    
    printf("Enter a no. :- ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {

        sum = sum + i;
    }
    printf(" THe sum of first %d natural number is %d", a, sum);
    return 0;
}

//Q2. Write a program to calculate sum of first N even natural numbers.

#include <stdio.h>
int main()
{

    int i, sum = 0, a;    
    printf("Enter a no. :- ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        i = 2 * i ;
        sum = sum + i;
    }
    printf(" THe sum of first %d even natural number is %d", a, sum);
    return 0;
}

//Q3. Write a program to calculate sum of first N odd natural numbers.

#include <stdio.h>
int main()
{

    int i, sum = 0, a;    
    printf("Enter a no. :- ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        i = 2 * i -1;
        sum = sum + i;
    }
    printf(" THe sum of first %d odd natural number is %d", a, sum);
    return 0;
}

//Q4. Write a program to calculate sum of squares of first N natural numbers.

#include <stdio.h>
int main()
{

     int i, sum = 0, n;    
    printf("Enter a no. :- ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        sum = sum + i * i;
    }
    printf("  %d", sum);
    return 0;
}

//Q5. Write a program to calculate sum of cubes of first N natural numbers.

#include <stdio.h>
int main()
{

     int i, sum = 0, n;    
    printf("Enter a no. :- ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        sum = sum + i * i * i;
    }
    printf("  %d", sum);
    return 0;
}

//Q6. Write a program to calculate factorial of a number.

#include<stdio.h>
int main()
{
    int n,i,fact = 1;
    
    printf("Enter the value of n:- \n");
    scanf("%d",&n);

    for(i = 2; i<=n ; i++)
    {
        fact = fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
    return 0;
}

//Q7. Write a program to count digits in a given number.

#include<stdio.h>
int main()
{
    int n,count = 0;

    printf("Enter value of n\n");
    scanf("%d", &n);

    while(n  != 0)
    { 
        n = n/10;
        count++;
    }
    printf("Number of digit is %d",count);
    return 0;
}

//Q8. Write a program to check whether a given number is a Prime number or not.

#include<stdio.h>
int main()
{
    int n,i,flag = 0;

    printf("Enter value of n\n");
    scanf("%d", &n);

    for (i =2 ; i < n ; i++)
    {
        if(n % i ==0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    printf("Not prime");
    else
    printf("Prime");

    return 0;
}

//Q9. Write a program to calculate LCM of two numbers.

#include<stdio.h>
int main()
{
    int a,b,i;

    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);

    for(i=1 ; i<=100 ; i++)
    {
        if( (i%a==0)  && (i%b==0))
        {
            break;
        }
    }
    printf("LCM is %d",i);
    return 0;
}

