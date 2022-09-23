//Q1. Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>
int main() 
{
    float radius, area;
    printf("\nEnter the radius of Circle : ");  
    scanf("%d", &radius);
 
    area = 3.14 * radius * radius;
    printf("\nArea of Circle : %f", area);
 
    return (0);
}

//Q2. Write a function to calculate simple interest. (TSRS)

#include<stdio.h>
float interest(int P,float R, int N)
{
     float SI;
     SI=P*R*N/100.0;
     return SI;
}      
int main()
{
     int p,n,i;
     float r,Z;
     for(i=1;i<=3;i++)
     {
    
          printf("Enter Principal Amount : ");
          scanf("%d",&p);
          printf("Enter Interest-Rate : ");
          scanf("%f",&r);
          printf("Enter Time Period : ");
          scanf("%d",&n);
          Z=interest(p,r,n);
          printf("\nSimple-Interest is %d : %.2f\n",i,Z);
          
     }
     return 0;
}

//Q3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)

#include <stdio.h>
int Even(int num)
{
    return !(num & 1);
}

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    
    if(Even(num))
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
    
    return 0;
}

//Q4. Write a function to print first N natural numbers (TSRN)

 #include<stdio.h>
 int print(int n)
 {
    if(n>=2)
      print(n-1);
      printf("%d,",n);

 }
 
 int main()
 {
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    print(a);
 }

//Q5. Write a function to print first N odd natural numbers. (TSRN)

#include<stdio.h>
int main()
{
    int n, i=1;
    printf("Enter the number: ");
    scanf("%d",&n);

    while(i<=2*n)
    {
        printf("%d ",i);
        i = i+2;
    }
}

//Q6. Write a function to calculate the factorial of a number. (TSRS)

#include<stdio.h>
int fact(int n)
{
    int i, fact = 1;
    for(i=1;i<=n;i++)
        fact = fact*i;
    return fact;
}

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);

    printf("%d", fact(a));
}

//Q7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

#include<stdio.h>
int fact(int n)
{
    int i, fact = 1;
    for(i=1;i<=n;i++)
        fact = fact*i;
    return fact;
}

int comb(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

int main()
{
    int a,b;
    printf("Enter the number: ");
    scanf("%d  %d",&a, &b);

    printf("%d", comb(a,b));
}

//Q8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

#include<stdio.h>
int fact(int n)
{
    int i, fact = 1;
    for(i=1;i<=n;i++)
        fact = fact*i;
    return fact;
}

int comb(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

int perm(int n, int r)
{
    return fact(n)/fact(n-r);
}

int main()
{
    int a,b;
    printf("Enter the number: ");
    scanf("%d  %d",&a, &b);

    printf("%d", comb(a,b));
}

//Q9. Write a function to check whether a given number contains a given digit or not. (TSRS)

#include<stdio.h>
int digit(int n)
{
    int rem;
    while(n)
    {
        rem = n%10;
        if(rem == digit)
            return 1;
        n = n/10;
    }
    return 0;
}

int main()
{
    int a,b;
    printf("Enter the number");
    scanf("%d", &a);
    b = digit(a);
}

//Q10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include<stdio.h>
int primefact(int );
int primefact(int n)
{
    int i;
    for (i = 2 ; n != 1 ; i++)
    {
        while(n%i == 0)
        {
            n = n/i;
            printf("%d,",i);
        }
    }
}
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);    
    primefact(a);

}