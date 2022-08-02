//Q1. Write a program to print MySirG 5 times on the screen.

#include<stdio.h>
int main()
{
    int i = 1;
    while (i<=5)
    {
        printf("MySirG\n");
        i++;
    }

    return 0;
}

//Q2. Write a program to print the first 10 natural numbers.

#include<stdio.h>
int main()
{
    int i =1;
    while (i<=10)
    {
        printf("%d\n",i);
        i++;
    }

    return 0;

}

//Q3. Write a program to print the first 10 natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i = 10;
    while (i >= 1)
    {
        printf("%d\n",i);
        i--;
    }

    return 0;
}

//Q4. Write a program to print the first 10 odd natural numbers.

#include<stdio.h>
int main()
{
    int i = 1;
    while (i <= 20)
    {
        printf("%d\n", i);
        i += 2;
    }

    return 0;
}

//Q5. Write a program to print the first 10 odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i = 19;
    while (i >= 1)
    {
        printf("%d\n" , i);
        i -= 2;
    }

    return 0;

}

//Q6. Write a program to print the first 10 even natural numbers.

#include<stdio.h>
int main()
{
    int i = 2;
    while (i <= 20)
    {
        printf("%d\n" , i);
        i += 2;
    }

    return 0;
}

//Q7. Write a program to print the first 10 even natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i = 20;
    while (i >=  2)
    {
        printf("%d\n" , i);
        i -= 2;
    }
    
    return 0;
}

//Q8. Write a program to print squares of the first 10 natural numbers.

#include<stdio.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d\n" , i * i);
        i++;
    }

    return 0;
}

//Q9. Write a program to print cubes of the first 10 natural numbers.

#include<stdio.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d\n" , i * i * i);
        i++;
    }

    return 0;
}

//10. Write a program to print a table of 5.

#include <stdio.h>
int main()
{
    int i = 1, x;
    while (i <= 10)
    {
        x = 5;
        printf("%d\n", x * i);
        i++;
    }

    return 0;
}
