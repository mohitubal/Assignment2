//Q1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int num[10], i, sum = 0;
    printf("Enter the 10 values: ");
    for(i=0 ; i<=9 ; i++)
        scanf("%d",&num[i]);

    for(i=0 ; i<=9 ; i++)
        sum = sum+num[i];
    printf("Sum is %d",sum);
    return 0;
}

//Q2. Write a program to calculate the average of numbers stored in an array of size 10.Take array values from the user.

#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("Enter the 10 numbers: ");
    for(i=0 ; i<=9 ; i++)
        scanf("%d",&a[i]);

    for(i=0 ; i<=9 ; i++)
        sum = sum+a[i];
    avg = sum/10.0;
    printf("Average is %f: ",avg);
    return 0;

}

///Q3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int num[10],i,sum=0,odd=0;
    printf("Enter the 10 numbers: ");
    for(i=0 ; i<=9 ; i++)
        scanf("%d",&num[i]);

    for(i=0 ; i<=9 ; i++)
    {
        if(num[i]%2)
        {
            sum = sum + num[i];
        }
        else
        {  
            odd = odd + num[i];
            
        }
    }
    printf("Sum of even numbers: %d\n",sum);
    printf("\nSum of odd numbers: %d", odd);
    return 0;
}

//Q4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int a[10], i, max = -99999;
    printf("Enter the 10 numbers: ");
    for(i=0 ; i<=9 ; i++)
        scanf("%d",&a[i]);

    for(i = 0 ; i < 10 ; i++)
    {
        if(max < a[i])
            max = a[i];
    }
    printf("Greatest value is %d",max);
    return 0;
}

//Q5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int a[10], i, max = 99999;
    printf("Enter the 10 numbers: ");
    for(i=0 ; i<=9 ; i++)
        scanf("%d",&a[i]);

    for(i = 0 ; i < 10 ; i++)
    {
        if(max > a[i])
            max = a[i];
    }
    printf("Smallest value is %d",max);
    return 0;
}

//Q6. Write a program to sort elements of an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int a[5], i, j, temp;
    printf("Enter the 5 numbers: \n");
    for(i=0 ; i<5 ; i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0 ; i<4 ; i++)
    {
        for(j=i+1 ; j<5 ; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;                    
            }
        }
    }

    for(i=0 ; i<5 ; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

//Q7. Write a program to find second largest in an array.Take array values from the user.

#include <stdio.h>
#include <limits.h>     

int main()
{
    int arr[10], i;
    int max1, max2;

    printf("Enter 10 elements in the array: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = 10;

    for(i=0; i<10; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    printf("First largest = %d\n", max1);
    printf("Second largest = %d", max2);

    return 0;
}

//Q8. Write a program to find the second smallest number in an array.Take array values from the user.

#include <stdio.h>
#include <limits.h>     

int main()
{
    int arr[10], i;
    int max1, max2;

    printf("Enter 10 elements in the array: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = 10;

    for(i=0; i<10; i++)
    {
        if(arr[i] < max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    printf("First smallest = %d\n", max1);
    printf("Second smallest = %d", max2);

    return 0;
}

//Q9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.

#include <stdio.h>    
int main()    
{     
    int arr[5],i;
    printf("Enter the 5 values: ");     
    for(i=0 ; i<=4 ; i++)
        scanf("%d ",&arr[i]);

    int length = sizeof(arr)/sizeof(arr[0]);    
        
    printf("Original array: \n");    
    for (int i = 0; i < 5; i++) {     
        printf("%d ", arr[i]);     
    }      
        
    printf("\n");    
        
    printf("Array in reverse order: \n");    
    for (int i = 5-1; i >= 0; i--) {     
        printf("%d ", arr[i]);     
    }     
    return 0;    
}    

//Q10. Write a program in C to copy the elements of one array into another array.Take array values from the user.

#include<stdio.h>
int main()
{
    int a[5], b[5],i;
    printf("Enter the 5 numbers: ");
    for(i=0 ; i<5 ; i++)
        scanf("%d ",&a[i]);

    for(i=0 ; i<5 ; i++)
    {
        b[i] = a[i];
    }
    
    for(i=0 ; i<5 ; i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");

    for(i=0 ; i<5 ; i++)
    {
        printf("%d",b[i]);
    }
    
    return 0;
}