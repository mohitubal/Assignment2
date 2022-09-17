//Q1. Write a recursive function to print first N natural numbers.

#include<stdio.h>
int num(int);
int main()
{
    int n1;
    printf("Enter the number");
    scanf("%d",&n1);
    printf("The first n natural numbers are %d",n1);
    num(n1);
    printf("\n");
    return 0;
}

int num(int n1)
{
    if(n1)
        num(n1-1);
    else
        return  ;

    printf("\n%d\n",n1);
    
    
}

//Q2. Write a recursive function to print first N natural numbers in reverse order.

#include<stdio.h>
int reverse(int num);
int main()
{
    int num,s;
    printf("Enter the number:-");
    scanf("%d",&num);
    s=reverse(num);
    return 0;
}

int reverse(int num)
{
    if(num==0)  
        return;
        printf("%d ",num);
        reverse(num-1);
        
    
}

//Q3. Write a recursive function to print first N odd natural numbers.

#include<stdio.h>
int odd_num(int num);
int main()
{
    int num,s;
    printf("Enter the number:-");
    scanf("%d",&num);
    s=odd_num(num);
    return 0;
}

int odd_num(int num)
{
    if(num==0)  
        return;
    odd_num(num-1);
    printf("%d ",2*num-1);
    
}

//Q4. Write a recursive function to print first N odd natural numbers in reverse order.

#include<stdio.h>
int odd_num(int num);
int main()
{
    int num,s;
    printf("Enter the number:-");
    scanf("%d",&num);
    s=odd_num(num);
    return 0;
}

int odd_num(int num)
{
    if(num==0)  
        return;
    printf("%d ",2*num-1);
    odd_num(num-1);
    
}

//Q5. Write a recursive function to print first N even natural numbers.

#include<stdio.h>
int even_num(int num);
int main()
{
    int num,s;
    printf("Enter the number:-");
    scanf("%d",&num);
    s=even_num(num);
    return 0;
}

int even_num(int num)
{
    if(num==0)  
        return;
    even_num(num-1);
    printf("%d ",2*num);    
}

//Q6. Write a recursive function to print first N even natural numbers in reverse order.

#include<stdio.h>
int even_num(int num);
int main()
{
    int num,s;
    printf("Enter the number:-");
    scanf("%d",&num);
    s=even_num(num);
    return 0;
}

int even_num(int num)
{
    if(num==0)  
        return;
    printf("%d ",2*num);  
    even_num(num-1);
      
}

//Q7. Write a recursive function to print squares of first N natural numbers.

#include<stdio.h>
int squr_num(int num);
int main()
{
    int num,s;
    printf("Enter the number:-");
    scanf("%d",&num);
    s=squr_num(num);
    return 0;
}

int squr_num(int num)
{
    if(num==0)  
        return;
    squr_num(num-1);
    printf("%d ",num*num);    
}

//Q8. Write a recursive function to print binary of a given decimal number.

#include <stdio.h>

int decimal_binary(int n)
{
    if (n==0)
        return 0;
    else
        return ((n%2)+10*decimal_binary(n/2));
}

void main()
{
   int no;
 
   printf("Enter a decimal number\n");
   scanf("%d",&no);
   printf("Decimal(%d) = Binary(%d)\n",no,decimal_binary(no));
}

//Q9. Write a recursive function to print octal of a given decimal number.

#include <stdio.h>
 
int main()
{
    int num, octal=0, rem, i=1;
 
    printf("Enter a Decimal number: \n");
    scanf("%d",&num);
 
    while(num != 0)
    {   

        rem = num%8;
        octal = (rem*i) + octal; 
        num = num/8;
        i= i*10;                         
    }
 
    printf("Octal: %d", octal);
 
    return 0;
}

//Q10. Write a recursive function to print reverse of a given number.

#include <stdio.h>
int sum=0,rem;
int reverse_function(int num)
{
  if(num)
  {
    rem=num%10;
    sum=sum*10+rem;
    reverse_function(num/10);
  }
  else
    return sum;
  return sum;
}
int main(){
  int num,reverse_number;

  printf("Enter any number:");
  scanf("%d",&num);

  reverse_number=reverse_function(num);
  printf("The reverse of entered number is :%d",reverse_number);
  return 0;
}
