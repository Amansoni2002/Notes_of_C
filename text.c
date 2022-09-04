#include<stdio.h>

int main()
{
   int number;
   char n;
    printf("enter a number : \n");
    scanf("%c" , &n );
    scanf("%d",&number);

   

    if(number > 0){
        printf("%d is a positive number",number);
    }
    else if(number < 0){
        printf("%d is a negative number",number);
    }
    else if(number == 0){
        printf("you entered zero \n");
    }
    else if( (n='a'))
    {
        printf("you entered a character!");
    }
    else {
        printf( " ");
    }

    return 0;

}