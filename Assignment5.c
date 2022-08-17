//Q1. Write a program to print MySirG N times on the screen.

#include<stdio.h>
int main()
{
    int i = 1,n;
    printf("Enter a number:-");
    scanf("%d", &n);
    while (i<=n)
    {
        printf("MySirG\n");
        i++;
    }

    printf("\n");
    return 0;
}

//Q2. Write a program to print the first N natural numbers.

#include<stdio.h>
int main()
{
    int i = 1,n;
    printf("Enter a number:-");
    scanf("%d", &n);
    while (i<=n)
    {
        printf("%d\n",i);
        i++;
    }

    printf("\n");
    return 0;
}

//Q3. Write a program to print the first N natural numbers in reverse order.

#include <stdio.h>
int main()
{
    int n;
    printf(" Enter the value of n :- ");
    scanf(" %d", &n);
    int i = n;

    while (i >= 1)
    {
        printf("%d\n", i);
        --i;
    }

    return 0;
}

//Q4. Write a program to print the first N odd natural numbers.

#include <stdio.h>
int main()
{
    int i = 1, n;
    printf(" Enter the value of n :- ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", 2 * i - 1);
        i++;
    }

    return 0;
}

//Q5. Write a program to print the first N odd natural numbers in reverse order.

#include <stdio.h>
int main()
{
    int n;
    printf(" Enter the value of n :- ");
    scanf(" %d", &n);
    int i = n;

    while (i >= 1)
    {
        printf("%d\n", 2 * i - 1);
        --i;
    }

    return 0;
}

//Q6. Write a program to print the first N even natural numbers.

#include <stdio.h>
int main()
{
    int i = 1, n;
    printf(" Enter the value of n :- ");
    scanf("%d", &n);

    while (i <= n)
    {

        printf("%d\n", 2 * i);
        i++;
    }

    return 0;
}

//Q7. Write a program to print the first N even natural numbers in reverse order.

#include <stdio.h>
int main()
{
    int n;
    printf(" Enter the value of n :- ");
    scanf(" %d", &n);
    int i = n;

    while (i >= 1)
    {
        printf("%d\n", 2 * i);
        --i;
    }

    return 0;
}

//Q8. Write a program to print squares of the first N natural numbers.

#include <stdio.h>
int main()
{
    int i = 1, n;
    printf(" Enter the value of n :- ");
    scanf("%d", &n);

    while (i <= n)
    {

        printf("%d\n", i * i);
        i++;
    }

    return 0;
}

//Q9. Write a program to print cubes of the first N natural numbers.

#include <stdio.h>
int main()
{
    int i = 1, n;
    printf(" Enter the value of n :- ");
    scanf("%d", &n);

    while (i <= n)
    {

        printf("%d\n", i * i * i);
        i++;
    }

    return 0;
}

//Q10. Write a program to print a table of N.

#include <stdio.h>
    int main()
    {
        int i = 1, n;
        printf(" Enter a no. for table :- ");
        scanf("%d", &n);
        while (i <= 10)
        {
            printf("%d\n", i * n);
            i++;
        }

        return 0;
    }