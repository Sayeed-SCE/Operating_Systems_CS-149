/* 
  Worksheet Three,  4.14_LAB_convert to reverse binary

Partner1 Name:      Sayeed Najeebullah
partner1 studen ID:  014319227


Partner1 Name:      Mohamed Edris
partner1 studen ID:  014840904

In this Lab 
Write a program that takes in a positive integer as input, 
and outputs a string of 1's and 0's 
representing the integer in reverse binary. 
For an integer x, the algorithm is

As long as x is greater than 0
   Output x % 2 (remainder is either 0 or 1)
   x = x / 2

*/

#include <stdio.h>

int main(void) {
   int x;     // x get next input
   scanf("%d", &x);
     
while ( x > 0){
   
   printf("%d", (x % 2));
      x = x / 2;
}
printf("\n");
return 0;
   
}

