/* 
Worksheet: 1
Class: CS149 Operating Systems

Name: Sayeed Najeebullah

Partner Name: Mohamed Edris

*/


#include <stdio.h>

int main(void) {
   int userNum;
   int userNum2;
   int userNum3;
   int newNum;
   int sumUserNewNum;
   int mulNum;
   
   printf("Enter integer:\n");
   scanf("%d", &userNum);
   
   // printf("%d\n", userNum);
   printf("You entered: %d\n", userNum);
   printf("%d squared is ", userNum );
   
   userNum2 = userNum * userNum;
   printf("%d\n", userNum2);
   printf("And %d cubed is ", userNum);
   
   userNum3 = userNum2 * userNum; 
   printf("%d!!\n", userNum3);
   
   printf("Enter another integer:\n");
   scanf("%d", &newNum);
   
   sumUserNewNum = userNum + newNum;
   printf("%d + ", userNum);
   printf("%d is ", newNum);
   printf("%d\n", sumUserNewNum);
   
   mulNum = userNum * newNum;
   printf("%d * ", userNum);
   printf("%d is ", newNum);
   printf("%d\n", mulNum);

   return 0;
}