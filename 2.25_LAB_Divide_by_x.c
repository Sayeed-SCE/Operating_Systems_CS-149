/* 
  Worksheet Two,  2.25_LAB_Divide_by_x

Partner1 Name:      Sayeed Najeebullah
partner1 studen ID:  014319227


Partner1 Name:      Mohamed Edris
partner1 studen ID:  014840904

In this Lab we using integers userNum and x as input, 
and output userNum divided by x three times.

Note: In C, integer division discards fractions. 
Ex: 6 / 4 is 1 (the 0.5 is discarded).

*/

#include <stdio.h>

int main (void) {
   int userNum;
   int x;
   int userNum0;
   int userNum1;
   int userNum2;
   
   scanf("%d", &userNum);
   scanf("%d", &x);
   
   userNum0 = userNum/x;
   userNum1 = userNum0/x;
   userNum2 = userNum1/x;
   
   printf("%d ", userNum0);
   printf("%d ", userNum1);
   printf("%d\n", userNum2);

   return 0: 

}
