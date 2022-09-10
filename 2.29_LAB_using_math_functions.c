/* 
Worksheet Two,  2.29_LAB_using_math_functions

Partner1 Name:      Sayeed Najeebullah
partner1 studen ID:  014319227

Partner1 Name:      Mohamed Edris
partner1 studen ID:  014840904
*/
/*
Given three floating-point numbers x, y, and z, output x to the power of z, x to the power of (y to the power of 2), the absolute value of y, and the square root of (xy to the power of z).

Output each floating-point value with two digits after the decimal point, which can be achieved as follows:
printf("%0.2lf", yourValue);

Ex: If the input is: 5.0 6.5 3.2 

the output should be: 172.47 340002948455826440449068892160.00 6.50 262.43
*/

#include <stdio.h>
#include <math.h>

int main(void) {
   double x;
   double y;
   double z;
   
   double x1;
   double x2;
   double y1;
   double squareRoot;
   
   scanf("%lf%lf%lf", &x,&y,&z);
   
   x1 = pow(x, z);
   x2 = pow(x, pow(y, 2));
   y1 = fabs(y);
   squareRoot = sqrt(pow (x*y, z));
   
   printf("%0.2lf ", x1);
   printf("%0.2lf ", x2);
   printf("%0.2lf ", y1);
   printf("%0.2lf\n", squareRoot);

   return 0;
}