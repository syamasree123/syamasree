/*File Name     :square.cc
  Author Name   :syamasree
  Description   :sum of square of numbers*/

#include<stdio.h>    
int main()  
{  
    int N, count = 1, sum = 0;      //declaring values
    printf("Enter the limit\n");       //enters the value
    scanf("%d", &N);  
    while(count <= N)  
    {  
        sum = sum + (count * count);      
        count++;  
    }  
    printf("Sum of squares of numbers from 1 to %d is %d.\n", N, sum);      //prints sum of squares of numbers
    return 0;  
}  

