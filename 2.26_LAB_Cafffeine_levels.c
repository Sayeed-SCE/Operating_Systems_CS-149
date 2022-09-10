/* 
Worksheet Two,  2.26_LAB_Cafffeine_levels

Partner1 Name:      Sayeed Najeebullah
partner1 studen ID:  014319227

Partner1 Name:      Mohamed Edris
partner1 studen ID:  014840904
*/

/*
A half-life is the amount of time it takes for a substance or entity to fall to half its original value. Caffeine has a half-life of about 6 hours in humans. Given caffeine amount (in mg) as input, output the caffeine level after 6, 12, and 24 hours.

Output each floating-point value with two digits after the decimal point, which can be achieved as follows:
printf("%0.2lf", yourValue);

Ex: If the input is: 100

output should be: 
	After 6 hours: 50.00 mg
	After 12 hours: 25.00 mg
	After 24 hours: 6.25 mg
*/

#include <stdio.h>

int main(void) {
   double caffeineMg;  // "double" supports floating-point like 75.5, versus int for integers like 75.
   double afterSixHrs = 2.0;
   double afterTweleveHrs = 4.0;
   double afterTwentyfourHrs = 16.0;
   
   double after6;
   double after12;
   double after24;
   
   scanf("%lf", &caffeineMg);
   
   after6 = caffeineMg / afterSixHrs;
   after12 = caffeineMg / afterTweleveHrs;
   after24 = caffeineMg / afterTwentyfourHrs;
   
   printf("After 6 hours: %0.2lf mg\n", after6);
   printf("After 12 hours: %0.2lf mg\n", after12 );
   printf("After 24 hours: %0.2lf mg\n", after24);
   
   return 0;
}