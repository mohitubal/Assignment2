//Q1. Write a program to print unit digit of a given number.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number : ");
    scanf("%d", &a);
    b = a/10;
    printf("%d", b);
    return 0;
}

//Q2. Write a program to print a given number without its last digit.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number :");
    scanf("%d", &a);
    b = a % 10;
    printf("The last digit of the given no. is : %d" , b);
    return 0;
}

//Q3. Write a program to swap values of two int variables

#include<stdio.h>
int mian()
{
    int a,b,c;
    
    printf("Enter the first number :");
    scanf("%d" , &a);
    printf("Enter the second number :");
    scanf("%d" , &b);

    c = a;
    a = b;
    b = c;

    printf("The swaped numbers are : %d %d", a ,b);
    return 0;
}

//Q4. Write a program to swap values of two int variables without using a third variable

#include<stdio.h>
int main()
{
    int a,b;
    
    printf("Enter the first number :");
    scanf("%d", &a);

    printf("Enter the second number :");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The swaped values are : %d %d", a, b);
    return 0;
}

//Q5. Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the three digit number :");
    scanf("%d", &a);

    b = a / 100 + a / 10 % 10 + a % 10;

    printf("Sum of three digit are %d", b);
    return 0; 
}

//Q6. Write a program which takes a character as an input and displays its ASCII code.

#include<stdio.h>
int main()
{
    char a;
    printf("Enter the character :");
    scanf("%c", &a);

    printf("The ASCII code of character is %c = %d", a , a);
    return 0;
}

//Q8. Write a program to check whether the given number is even or odd using a bitwise operator.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);

    if(a%2 ==0)
    {
        printf("The number is even");

    }
    else
    {
        printf("The number is odd");
    }

    return 0;
}

//Q9. Write a program to print size of an int, a float, a char and a double type variable.

#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    
    // Size of Variables
    printf("Size of int: %ld bytes \n", sizeof(a));
    printf("Size of float: %ld bytes \n", sizeof(b));
    printf("Size of char: %ld bytes \n", sizeof(c));
    printf("Size of double: %ld bytes", sizeof(d));
    
    return 0;
}

//Q10. Write a program to make the last digit of a number stored in a variable as zero. 

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number :");
    scanf("%d", &a);

    b = a / 10;
    b = b * 10;

    printf("%d", b);
    return 0;

}

//Q11. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number.

#include<stdio.h>
 int main()
{
    float a, b,c, d;
    int e;
    printf("Enter a the no. :- ");
    scanf("%f", &a);

    printf("Enter a the digit :- ");
    scanf("%f", &b);

    c = b / 10;
    d = a + c;
    e = d * 10;
    printf("The combined no. is %d", e);
    return 0;
}

//Q12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

#include <stdio.h>
int main()
{

    float a, b;
    printf(" Enter the the value of INR :- ");
    scanf("%f", &a);
    b = a / 76.23;
    printf(" The USD of %d is %f", a, b);
    return 0;
}

//Q13. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right

#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter any number :- ");
    scanf("%d", &a);
    printf("Enter number of rotations:\n");
    scanf("%d", &b);
    d = sizeof(int) * 8;
    b %= d;
    while (b--)
    {
        c = a & 1;
        a = (a >> 1) & (~(1 << d));
          a = a | (c << d);
    }
    printf("After right rotation the value is = %d\n", a);
    return 0;
}