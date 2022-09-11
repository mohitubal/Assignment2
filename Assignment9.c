//Q1. Write a program which takes the month number as an input and display number of days in that month.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter the month number :-");
    scanf("%d",&x);

    switch (x)
    {
    case 1:
        printf("There are 31 days in this month.");
        break;

    case 2:
        printf("There are 28 days in this month.");
        break;

    case 3:
        printf("There are 30 days in this month.");
        break;

    case 4:
        printf("There are 30 days in this month.");
        break;

    case 5:
        printf("There are 31 days in this month.");
        break;

    case 6:
        printf("There are 30 days in this month.");
        break;

    case 7:
        printf("There are 31 days in this month.");
        break;

    case 8:
        printf("There are 31 days in this month.");
        break;

    case 9:
        printf("There are 30 days in this month.");
        break;
    
    case 10:
        printf("There are 31 days in this month.");
        break;

    case 11:
        printf("There are 30 days in this month.");
        break;

    case 12:
        printf("There are 31 days in this month.");
        break;

    default:
        printf("Error");
        break;
    }

    printf("\n");
    return 0;
}

//Q2. Write a menu driven program with the following options:
//a. Addition
//b. Subtraction
//c. Multiplication
//d. Division
//e. Exit

#include <stdio.h>
int main()
{
    int x, a, b;
    printf("\n1. Addition");
    printf("\n2. Substraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. exit");

    printf("\n\n Enter your choice:");
    scanf("%d", &x);


    switch (x)
    {

    case 1:
        printf("Enter two no. :- ");
        scanf("%d %d", &a, &b);
        printf(" The sum is %d", a + b);
        break;

    case 2:
        printf("Enter two no. :- ");
        scanf("%d %d", &a, &b);
        printf(" The difference is %d", a - b);
        break;

    case 3:
        printf("Enter two no. :- ");
        scanf("%d %d", &a, &b);
        printf(" The product is %d", a * b);
        break;

    case 4:
        printf("Enter two no. :- ");
        scanf("%d %d", &a, &b);
        printf(" The division is %d", a / b);
        break;

    case 5:
        break;

    default:
        printf("Invalid choice");
        break;
    }

    return 0;
}

//Q3. Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include <stdio.h>
int main()
{
    int x;
    printf("Enter the no. of a day from a week :- ");
    scanf(" %d", &x);

    switch (x)
    {
    case 1:
        printf(" Hello, have a awesome monday dear.");
        break;

    case 2:
        printf(" Hello, have a awesome Tuesday dear.");
        break;
   
    case 3:
        printf(" Hello, have a awesome wednwsday dear.");
        break;
        
    case 4:
        printf(" Hello, have a awesome thursday dear.");
        break;

    case 5:
        printf(" Hello, have a awesome friday dear.");
        break;

    case 6:
        printf(" Hello, have a awesome saturday dear.");
        break;
        
    case 7:
        printf(" Hello, have a awesome sunday dear.");
        break;

    default:
        printf(" Invalid day");
        break;
    }
    return 0;
}

//************Question 4************


#include<stdio.h>
int main()
{
    int choice, a, b, c;
while (1)
{
    printf("Enter your choice\n");
    printf("1. To check Isosceles Triangle.\n");
    printf("2. To check Right Angle Triangle.\n");
    printf("3. To check Equilateral Triangle.\n");
    printf("4. Exit\n\n");
    scanf("%d",&choice);

    printf("Enter length of 3 sides of triangle.\n");
    scanf("%d %d %d", &a ,&b , &c );

    switch (choice)
    {
    case 1: if (a == b || b == c || c == a)
            printf("Isosceles Traingle.\n");
        else  
            printf("Not an Isosceles Triangle.\n");  
        break;
    
    case 2: if (a*a == b*b + c*c || b*b == c*c + a*a || c*c == a*a + b*b )
            printf("Right Angle Triangle.\n");
        else 
            printf("Not an Right Angle Triangle.\n");
        break;

    case 3: if ( (a == b) && (b == c) )
            printf("Equilateral Triangle.\n");
        else
            printf("Not an Equilateral Triangle.\n");
        break;
          
    case 4: break;

    default: printf("Invalid\n");
    }
}
return 0;
}

//Q5. Convert the following if-else-if construct into switch case:
//if(var == 1)
//System.out.println("good");
//lse if(var == 2)
//System.out.println("better");
//else if(var == 3)
//System.out.println("best");
//else
//System.out.println("invalid");


#include<stdio.h>
int main()
{
    int x;

    printf("Enter a number:- ");
    scanf("%d",&x);

    switch (x)
    {
    case 1:
        printf("Good");
        break;
    
    case 2:
        printf("Better");
        break;

    case 3:
        printf("Best");
        break;

    default:
        printf("Invalid");
        break;
        
    }
}

//Q6. Program to check whether a year is a leap year or not. Using switch statement.

#include <stdio.h>
int main()
{
    int x;

    printf("Enter the year :- ");
    scanf("%d", &x);

    switch(x % 100 == 0)
    {
    case 1: switch(x % 400 == 0)
        {
        case 0: 
            printf("The entered year is a leap year");
            break;
        
        case 1:
            printf("The entered year is not a leap year");
            break;
        }
        break;

    case 0:switch(x % 4  == 0)
        
        {
        case 1: 
            printf("The entered year is a leap year");
            break;

        case 2:
            printf("The entered year is not a leap year");
            break;
        }
    
        
    }

    return 0;
}

//Q7. Program to take the value from the user as input electricity unit chargesand calculate total electricity bill according to the given condition . Using the switch statement.

#include<stdio.h>
int main()
{
    float x  , amount = 0 , total = 0;

    printf("Enter the unit:-\n");
    scanf("%f",&x);

    switch (x <= 50)
    {
    case 1: amount = x*0.5;
        break;

    case 0: switch(x <= 150)
        {
            case 1: amount = 25 + (x-50)*0.75;
                break;

            case 0: switch(x <= 250)
            {
                case 1: amount = 100+(x-150)*1.20;
                    break;

                case 0: amount = 220 + (x-250)*1.5;
                    break;
            }
            break;
        }
        break;
    }

total = amount + amount*0.20;
printf("Total amount = %f", total);

return 0;

}

//Q8. Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.

#include<stdio.h>
int main()
{
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);
    
    

    switch (a > 0)
    {
    case 1:
        printf("%d", -a);
        break;
    
    case 0:
        switch (a < 0)
        {
        case 1:
            printf("%d",-a);
            break;
        
        default:
            break;
        }
        
        

    default:
        break;
    }
    printf("\n");
    return 0;
}

//Q9. Program to Convert even number into its upper nearest odd number Switch Statement.

#include<stdio.h>
int main()
{
    int x;

    printf("Enter the value:-\n");
    scanf("%d",&x);

    switch (x%2 == 0)
    {
    case 1: printf("%d", x+1);
        break;

    case 0: printf("%d",x);
        break;
    }

return 0;
}

//Q10. C program to find all roots of a quadratic equation using switch case.

#include<math.h>
int main()
{
    int num, x, y, rem, count = 0, sum = 0;
    printf("Enter a number:-\n");
    scanf("%d",&num);

    x =  num;
    while (x != 0)
    {
        x = x / 10;
        count++;
    }

    y = num;
    while (y != 0)
    {
        rem = y % 10;
        y = y / 10;
        sum += pow(rem, count);
    }
    
    if (sum == num)
        printf("\n%d is an Armstrong number.", num);
    else
        printf("\n%d is not an Armstrong number.", num);

    printf("\n\n");
    return 0;
}
