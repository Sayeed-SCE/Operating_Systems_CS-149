/*
Worksheet Three,  4.16_Lab_Varied_amount_0f_input_data

Partner1 Name:      Sayeed Najeebullah
partner1 studen ID:  014319227


Partner1 Name:      Mohamed Edris
partner1 studen ID:  014840904

Statistics are often calculated with varying amounts of input data. Write a program that takes any number of non-negative integers as input, and outputs the max and average. A negative integer ends the input and is not included in the statistics. Assume the input contains at least one non-negative integer.

Output the average with two digits after the decimal point followed by a newline, which can be achieved as follows:
printf("%0.2lf\n", average);

Ex: When the input is 15 20 0 3 -1
the output is: 20 9.50

*/

#include <stdio.h>

int main(void) {
   int max = 0;
   int num = 0;
   int count = 0;
   double avg = 0;
   
   while (num >= 0) {
      scanf("%d", &num);
      if(num >= 0) {
         if(num > max)
         max = num;
         avg += num;
         ++count;
      }
   }
   if (count > 0){
      avg /= count;
   }
   printf("%d %.2f\n", max,avg);
   

   return 0;
}
