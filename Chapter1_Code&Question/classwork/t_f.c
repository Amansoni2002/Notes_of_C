// if it's sunday and it's snowing -> true
// #include<stdio.h>
//  int main(){
//     int sunday=1;
//     int snowing=1;
//     printf("It's sunday and snowing %d " , sunday && snowing);
//     return 0;
//  }


// if it's monday or it's raining -> true
// #include<stdio.h>
//  int main(){
//     int raining=1;
//     int monday=0;
//     printf("It's monday and it's raninig %d " , monday || raining);
//     return 0;
// }


// if a number is greater than 9 & less than 100 -> true
// (2 digit number)

#include<stdio.h>
 int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);
    printf("%d " , (num>9) && (num<100) );
    return 0;
 }

