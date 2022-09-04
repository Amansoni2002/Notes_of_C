// sum of two numbers in c
#include<stdio.h>

int main(){
    int a,b;
   
    printf( "Enter the frist number");
    scanf("%d", &a);
    printf( "Enter the second number");
    scanf("%d", &b);
    int c=a+b;
    printf( "The sum of first and second number is %d \n" , c);
    return 0;

}


// WE CAN ALSO WRITE LIKE THIS
#include<stdio.h>

int main(){
    int a,b;
   
    printf( "Enter the frist number ");
    scanf("%d", &a);
    printf( "Enter the second number ");
    scanf("%d", &b);
    printf( "The sum of first and second number is %d \n" , a+b);
    return 0;

}