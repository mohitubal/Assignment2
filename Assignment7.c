//Q1. Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0,i;
    printf("Enter the n value:- ");
    scanf("%d",&n);
    if(n == 0 || n == 1)
    printf("%d",n);
    else 
    nextTerm = t1 +t2;
    for(i =3; i<=n; i++)
    {
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 +t2;
    }
    printf("%d",t2);
}

//Q2. Write a program to print first N terms of Fibonacci series.

#include <stdio.h>
int main()
{
    int fib1 = 0, fib2 = 1, fib3, num, count = 0;
 
    printf("Enter the value of num \n");
    scanf("%d", &num);

    printf("First %d FIBONACCI numbers are ...\n", num);
    
    printf("%d\n", fib1);
    printf("%d\n", fib2);
    count = 2; 
    while (count < num)
    {
        fib3 = fib1 + fib2;
        count++;
        printf("%d\n", fib3);
        fib1 = fib2;
        fib2 = fib3;
   }
}

//Q3. Write a program to check whether a given number is there in the Fibonacc series or not.

#include<stdio.h>
int main()
{
    int n,calc1,calc2,pwr;
    printf("Enter a number :" );
    scanf("%d",&n);

    pwr= pow(n,2)+0.5;
    calc1=(5*pwr)+4;
    calc2=(5*pwr)-4;
    if(sqrt(calc1)==round(sqrt(calc1)) || sqrt(calc2)==round(sqrt(calc2)))
    {
        printf("The number is Fibonacci");
    }
    else
    {
        printf("The number is not Fibonacci");
    }
   
    return 0;
}

//Q4. Write a program to calculate HCF of two numbers.

#include<stdio.h>
int main()
{
    int num1 , num2 , hcf = 1;
    
    printf("Enter the first number:-");
    scanf("%d",&num1);
    printf("Enter the second number:-");
    scanf("%d",&num2);

    for(int i = 1; i <= num1 || i <= num2; i++) 
    {
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }
    
    printf("The HCF: %d", hcf);
    
    return 0;
}

//Q5. Write a program to check whether two given numbers are co-prime numbers or not.

#include<stdio.h>  
int main()  
{  
    int n1, n2, min, count, flag = 1;  
  
    printf("Enter 2 positive numbers\n");  
    scanf("%d%d", &n1, &n2);  
  
    min = n1 < n2 ? n1 : n2;
    for(count = 2; count <= min; count++)
    {
        if(n1 % count == 0 && n2 % count == 0)
        {
            flag = 0;
            break;
        }
    }
    
    if(flag)
    {
        printf("%d and %d are co-prime\n",n1,n2);
    }
    else 
    {
        printf("%d and %d are co-prime\n",n1,n2);
    }
    return 0;
   
}  

//Q6. Write a program to print all Prime numbers under 100.

#include <stdio.h>
int main()
{
  int i, a = 1, count; 
  while(a <= 100)
  {
    count = 0;
    i = 2;
    while(i <= a/2)
    {
      if(a%i == 0)
      {
        count++;
	break;
      }
      i++;	
    }	
    if(count == 0 && a != 1 )
    {
	printf(" %d ", a);
    }
    a++; 
  }
  return 0;
}

//Q7. Write a program to print all Prime numbers between two given numbers.

#include <stdio.h>
int main() 
{
   int low, high, i, flag;
   printf("Enter two numbers: ");
   scanf("%d %d", &low, &high);
   printf("Prime numbers between %d and %d are: ", low, high);
   
   while (low < high) 
   {
      flag = 0;
      if (low <= 1) 
        {
         ++low;
         continue;
        }

      for (i = 2; i <= low / 2; ++i) 
        {
            if (low % i == 0)   
            {
            flag = 1;
            break;
            }
        }

        if (flag == 0)
        printf("%d ", low);
        ++low;
   }

   return 0;
}

//Q8. Write a program to find next Prime number of a given number.

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=n ; i>0 ; i++)
    {
        count = 0;
        for(j=1 ; j<=i ; j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        {
            printf("%d",i);
            break;
        }
    }
}

//Q9. Write a program to check whether a given number is an Armstrong number or not.

#include<stdio.h>
int main()
{
    int num, x, y, rem, count = 0, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    x = num;
    while (x != 0)
    {
        x = x / 10;
        count++;
    }

    y = num;
    while(y != 0)
    {
        rem = y % 10;
        y = y / 10;
        sum += pow(rem,count);
    }

    if(sum == num)
        printf("\n%d is an Armstrong number.",num);
    else    
        printf("%d is not Armstrong number.",num);    
}

//Q10. Write a program to print all Armstrong numbers under 100.

#include<stdio.h>
#include<math.h>
int main()
{
    int n, x, r, s;
    
    printf("Armstrong numbers are\n");
    for(n=1 ; n<= 100; n++)
    {
        s=0;
        x=n;
        while(x != 0)
        {
            r = x % 10;
            s = s + r * r * r;
            x = x/10;
        }
        if (s==n)
            printf("%d\n",n);
    }
   
}
 
