#include<stdio.h>
int main()
{
    int a,b;
    
    printf("\nEnter first number ");
    scanf("%d",&a);
    
    printf("\nEnter the second number ");
    scanf("%d",&b);
    
    a=a+b; //a becomes sum of both numbers 
    b=a-b; //b takes value of a 
    a=a-b; //a takes value of b
    
    printf("\nAfter swapping value of first number = %d and value of second number = %d ",a,b);
    return(0);
}
