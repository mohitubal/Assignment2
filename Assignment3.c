//Q1. Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number :");
    scanf("%d", &a);

    if(a>0)
    {
        printf("The number is positive.");
    }
    else 
    {
        printf("The number is non-positive.");

    }
    printf("\n");
    return 0;
}

//Q2. Write a program to check whether a given number is divisible by 5 or not.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);

    if(a % 5 ==0)
    {
        printf("The number is divisible by 5");
    }
    else 
    {
        printf("THe number is not divisible by 5");
    }

    printf("\n");
    return 0;
}

//Q3. Write a program to check whether a given number is an even number or an odd number.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);

    if(a / 2 == 0)
    {
        printf("The given number is an even.");
    }
    else 
    {
        printf("THe given number is an odd.");
    }

    printf("\n");
    return 0;
}

//Q4. Write a program to check whether a given number is an even number or an odd number without using % operator.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);

    if ((a & 1) == 0)
    {
        printf("%d is even.", a);
    } 
    else
    {  
          printf("%d is odd.", a);
    }

    printf("\n");
    return 0;

}

//Q5. Write a program to check whether a given number is a three-digit number or not.

#include <stdio.h>
int main()
{
    int a, b;
    printf(" Enter a no. :- ");
    scanf(" %d", &a);
    b = a / 1000;
    if (b == 0)
    {
        printf(" The given no. is an three digit no. ");
    }
    else
    {
        printf(" The given no. is not an three digit no. ");
    }
    return 0;
}

//Q6. Write a program to print greater between two numbers. Print one number of both are the same.

#include <stdio.h>
int main()
{

    int a, b;
    printf(" Enter first no. :- ");
    scanf(" %d", &a);

    printf(" Enter second no. :- ");
    scanf(" %d", &b);

    if (a > b)
    {
        printf(" THe greatest between them is %d", a);
    }
    else if (b < a)
    {
        printf(" THe greatest between them is %d", b);
    }
    else
    {
        printf(" The both given numbers are equal and one of them is  %d ", a);
    }

    return 0;
}

//Q8. Write a program to check whether a given year is a leap year or not.

#include <stdio.h>
int main()
{
    int a;
    printf(" Enter a year :- ");
    scanf(" %d", &a);
    if (a % 4 == 0)
    {
        printf(" THe year is a leap year ");
    }
    else
    {
        printf(" THeyear is not a leap year ");
    }

    return 0;
}

//Q9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

#include<stdio.h>
int main()
{
    int a, b, c;
    printf(" Enter the first number :- ");
    scanf(" %d", &a);

    printf(" Enter the second number :- ");
    scanf(" %d", &b);

    printf(" Enter the third number:- ");
    scanf(" %d", &c);

    if (a > b)
    {
        printf(" the greatest is %d", a);
    }
    else if (b > c)
    {
        printf(" the greatest is %d", b);
    }
    else
    {
        printf(" the greatest is %d", c);
    }

    return 0;
}

//Q10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

#include<stdio.h>
int main()
{
    int a, b;
    float c, d;
    printf(" Enter the cost price :- ");
    scanf("%d", &a);

    printf(" Enter the selling price :- ");
    scanf("%d", &b);

    if (b > a)

    {
        c = b - a;
        printf(" The profit is %f\n", c);
        printf(" The percentage of profit is %f", c * 100 / 10);
    }
    else
    {
        d = a - b;
        printf(" The loss is %f \n", d);

        printf(" The percentage of loss is %f", d * 100 / 10);
    }

    return 0;
}

//Q11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include<stdio.h>
int main()
{
    int a, b, c, d, e;
    printf(" Enter your no. in subject a ** Out of Hundread ** :- ");
    scanf(" %d", &a);

    printf(" Enter your no. in subject b ** Out of Hundread ** :- ");
    scanf(" %d", &b);

    printf(" Enter your no. in subject c ** Out of Hundread ** :- ");
    scanf(" %d", &c);

    printf(" Enter your no. in subject d ** Out of Hundread ** :- ");
    scanf(" %d", &d);

    printf(" Enter your no. in subject e ** Out of Hundread ** :- ");
    scanf(" %d", &e);

    if (a >= 33 && a <= 100)
    {
        printf("You are passed in sub a \n");
    }

    else if (a > 100)
    {
        printf("THe enterred no. is more then 100 \n");
    }
    else
    {
        printf("You are failed in sub a \n");
    }
    if (b >= 33 && b <= 100)
    {
        printf("You are passed in sub b \n");
    }

    else if (b > 100)
    {
        printf("THe enterred no. is more then 100 \n");
    }
    else
    {
        printf("You are failed in sub b  \n");
    }

    if (c >= 33 && c <= 100)
    {
        printf("You are passed in sub c \n");
    }

    else if (c > 100)
    {
        printf("THe enterred no. is more then 100 \n");
    }
    else
    {
        printf("You are failed in sub c \n");
    }

    if (d >= 33 && d <= 100)
    {
        printf("You are passed in sub d \n");
    }

    else if (d > 100)
    {
        printf("THe enter no. is more then 100 \n");
    }
    else
    {
        printf("You are failed in sub d  \n");
    }

    if (e >= 33 && e <= 100)
    {
        printf("You are passed in sub e \n");
    }

    else if (e > 100)
    {
        printf("THe enter no. is more then 100 \n");
    }
    else
    {
        printf("You are failed in sub e : - \n");
    }

    return 0;
}

//Q12. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
int main()
{
    char a;
    printf(" Enter a Alphabat :- ");
    scanf(" %c", &a);

    if (a >= 'A' && a <= 'Z')
    {
        printf(" The Enterred Alphabet is in uppercase.");
    }

    else if (a >= 'a' && a <= 'z')
    {
        printf(" The Enterred Alphabet is in lowercase.");
    }

    return 0;
}

//Q13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number :-");
    scanf("%d",a);

    if ((a % 3 == 0) && (a % 2 == 0))
    {
        printf(" The given no. is divisible by 3 and 2.");
    }
    else
    {
        printf(" The given no. is not divisible by 3 and 2.");
    }

    return 0;
}

//Q14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a no. :- ");
    scanf("%d", &a);

    if (a % 7 == 0 || a % 3 == 0)
    {
        printf(" The given no. is divisible by 7 or  3.");
    }

    else
    {
        printf(" The given no. is not divisible by 7 or  3.");
    }

    return 0;
}

//Q15. Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number :-");
    scanf("%d",&a);

    if (a>0)
    {
        printf("The number is positive.");
    }
    
    else if (a == 0)
    {
        printf("The number is Zero.");
    }

    else
    {
        printf("The number is Negative.");
    }

    return 0;
}

//Q16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.

#include <stdio.h>
int main()
{
    char a;
    printf(" Enter a character :- ");
    scanf(" %c", &a);

    if (a >= 'A' && a <= 'Z')
    {
        printf(" The Enterred chracter is in uppercase.");
    }

    else if (a >= 'a' && a <= 'z')
    {
        printf(" The Enterred chracter is in lowercase.");
    }
    
    else if (a >= 48 && a <= 57)
    {
        printf(" The entered is a digit");
    }
    
    else
    {
        printf(" It is an special character");
    }

    return 0;
}

//Q17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not. 

#include <stdio.h>
int main()
{
    int a, b, c;
    printf(" Enter the length of three sides of the triangle :- ");
    scanf(" %d%d%d", &a, &b, &c);

    if (a == b, b == c)

        printf(" The triangle is valid ");

    else

        printf(" THe triangle is not valid ");

    return 0;
}

//Q18. Write a program which takes the month number as an input and display number of days in that month.

#include <stdio.h>
int main()
{
    int a;
    printf(" Enter the month's no. :- ");
    scanf(" %d", &a);
    
    if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12)
    {
        printf(" Days in this month are 31");
    }
    else if (a == 4 || a == 6 || a == 9 || a == 11)
    {
        printf(" Days in this month are 30");
    }

    else if (a == 2)
    {
        printf(" Days in this month are 28 or 29 ");
    }

    else
    {
         printf("Invalid Month number.");
    }

    return 0;
}

