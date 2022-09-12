//************Question 1************

#include<stdio.h>
int main()
{
    int i,j;

    for(i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 5 ; j++)
        {
            if (i >= j)
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

//************Question 2************

#include <stdio.h>
int main()
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (j >= 4-i )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

//************Question 3************

#include <stdio.h>
int main()
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (j <= 4-i )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

//************Question 4************

#include<stdio.h>
int main()
{
    int i,j;

    for(i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 5 ; j++)
        {
            if (j >= i)
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

//************Question 5************

#include<stdio.h>
int main()
{
    int i,j;

    for(i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 10 ; j++)
        {
            if ( j>=5-i && j<=5+i)
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

//************Question 6************

#include<stdio.h>
int main()
{
    int i,j;

    for(i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 10 ; j++)
        {
            if (j >= i  && j <= 8-i)
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

//************Question 7************

#include<stdio.h>
int main()
{
    int i,j;

    for(i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 10 ; j++)
        {
            if (j >= 5+i  || j <= 4-i )
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

//************Question 8************

#include<stdio.h>
int main()
{
    int i,j, count;

    for(i = 0 ; i <= 3 ; i++)
    {
        count = 0;
        for (j = 0 ; j < (3-i) ; j++)
            printf(" ");
        
        for (j = 0 ; j <= i ; j++)
            printf("%d",++count);

        count--;
        while(count)
            printf("%d",count-- );
       
        printf("\n");
    }
    
}

//************Question 9************

#include<stdio.h>
int main()
{
    int i,j, count;

    for(i = 0 ; i <= 3 ; i++)
    {
        count = 0;
        for (j = 0 ; j < 4  ; j++)
        {
            if (j >= i  && j <= 8-i)
            printf("%d",++count);
            else 
            printf(" ");
        }
        
        count--;
        while(count)
            printf("%d",count-- );
       
        printf("\n");
    }
    
}

//************Question 10************

#include<stdio.h>
int main()
{
    int i, j, count = 0;
    for (i = 0; i <= 3; i++)
    {
        count = 0;
        for (j = 0; j<= (3-i); j++)
            printf("%d",++count);

        for (j = 0; j < 2*i-1; j++)
            printf(" ");

        if(i==0)
            
        count--;
        while(count)
            printf("%d", count--);

        printf("\n");
    }
}

//************Question 11************

#include<stdio.h>
void main()
{
    int r,c,sp ;

    r = 1;
    while(r <= 5)
    {
        sp = 4;
        while(sp >= r)
        {
            printf(" ");  
            sp--;
        }

        c = 1;
        while(c <= r)
        {   
            printf("%c",c+64);
            c++;
        
        }
        
        c = c-2;
        while(c >= 1)
        {
            printf("%c",c+64);
            c--;
        }

    printf("\n");
    r++;
    }    
      
    
    return 0;
}

//************Question 13************

#include<stdio.h>
int main()
{
    int i,j,k,count ;

    for(i = 0 ; i <= 6 ; i++)
    {
        count = 0;
        for (j = 65 ; j <= 71-i ; j++)
        {
            printf("%c",j);
        }
        
        for (count=1 ; count <= i* 2-1 ; count++)
        {
            printf(" ");
        }

        for(k = 71-i ; k >= 65 ; k--)
        {
            if(k==71);
            else    
                printf("%c",k);
        }
       
        printf("\n");
    }
    
}

//************Question 14************

#include<stdio.h>
int main()
{
    int i,j;

    for(i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 5 ; j++)
        {
            if (j==0 || i==j || i==4)
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

//************Question 15************

#include <stdio.h>
int main()
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (j == 4 || j == i ||i == 0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

//************Question 16************

#include<stdio.h>
int main()
{
    int i,j;

    for(i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 9 ; j++)
        {
            if (j==4-i || j==4+i || i==4)
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

//************Question 17************

#include<stdio.h>
int main()
{
    int i,j;

    for(i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 9 ; j++)
        {
             if (i==0 || j == i || j == 8-i)
            printf("*");
            else 
            printf(" ");
        }
       
        printf("\n");
    }
    return 0;
}

//************Question 18************

#include<stdio.h>
int main()
{
    int i,j;

    for(i = 0 ; i < 4 ; i++)
    {
        for (j = 0 ; j <= 7 ; j++)
        {
            if ( j>=4-i && j<=4+i)
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }    

    for(i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j <= 9 ; j++)
        {
            if (j >= i  && j <= 8-i)
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    
    }
    return 0;
}

//************Question 19************

#include<stdio.h>
int main()
{
    int i,j;

    for(i = 0 ; i < 3 ; i++)
    {
        for (j = 0 ; j < 19 ; j++)
        {
            if (((2-i <= j) && (j <= 6+i) ) || ((12-i <= j) && (16+i >= j)))
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }
    for(i=0 ; i<10 ; i++)
    {
        for(j=0 ; j<19 ; j++)
        {
            if((i == 0) && (j == 7))
                printf("MySirG");
            if((i == 0) && (j>=6) && (j <=11)) 
            continue;
            if((i<=j) && (j <= 18-i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}