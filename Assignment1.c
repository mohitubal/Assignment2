//Q.1 Write a program to print Hello Students on the screen.


#include<stdio.h>
int main()
{
    printf("Hello Students");
    return 0;
}

//Q.2 Write a program to print Hello in the first line and Students in the second line.

#include<stdio.h>
int main()
{
    printf("Hello\nStudents");
    return 0;
}

//Q.3 Write a program to print “MySirG” on the screen. (Remember to print in double quotes)


#include<stdio.h>
int main()
{
    printf("\"MySirG\"");
    
    return 0;
}

//Q.4 WAP to find the area of the circle.Take radius of circle from user as input and print the result in below given format.

#include<stdio.h>
int main()
{
    int r;
    float A;
    printf("Enter the value of the radius of the circle r:");
    scanf("%d" ,&r);
    A = 3.14*r*r;
    printf("Area of circle is %f, having the radius  %d" ,A,r);
    return 0;
}

//Q.5 WAP to calculate the length of String using printf function

#include<stdio.h>
#include <string.h>
int main()
{
    char a[20];
    int i;
    printf(" Enter the string :- \n");
    gets(a);
    i = strlen(a);
    printf(" the length of string is = %d \n ", i);
    return 0;
}

//Q.6 WAP to print the name of the user in double quotes.

#include<stdio.h>
int main()
{
    char a[90];
    printf("Enter your name:-");
    scanf("%s ",&a);
    printf("\"Hello , %s \"",a);
    printf("\n");
    return 0;
}

//Q.7 WAP to print “%d” on the screen.

#include<stdio.h>
int main()
{
    printf("%%d");
    return 0;
}

//Q.8 WAP to print “\n” on the screen.

#include<stdio.h>
int main() 
{
    printf("\\n");
    return 0;
}

//Q.9 WAP to print “\\” on the screen.

#include <stdio.h>
int main()
{
    printf("\\\\");
    return 0;
}

//Q.10 WAP to take date as an input in below given format and convert the date format and display the result as given below.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the date :-");
    scanf("%d",&a);
    printf("Enter the month :-");
    scanf("%d",&b);
    printf("Enter the year :-");
    scanf("%d",&c);

    printf("Day -%d, Month - %d , Year - %d", a ,b ,c);
}

//Q.11 WAP to take time as an input in below given format and convert the time format and display the result as given below.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the time(Hour):-");
    scanf("%d",&a);
    printf("Enter the time(Minute):-");
    scanf("%d",&b);
    
    printf("%d Hour and %d Minute",a,b);
    return 0;
}

//Q.12 Find output of below code:


#include<stdio.h>
int main()
{
    int x = printf("ineuron");
    printf("%d", x);
    return 0;
}