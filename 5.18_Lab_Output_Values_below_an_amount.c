/*
Worksheet Three,  5.18_Lab_Output_Values_below_an_amount

Partner1 Name:      Sayeed Najeebullah
partner1 studen ID:  014319227


Partner1 Name:      Mohamed Edris
partner1 studen ID:  014840904


Write a program that first gets a list of integers from input. 
The input begins with an integer indicating the number of integers that follow. 
Then, get the last value from the input, which indicates a threshold. 
Output all integers less than or equal to that last threshold value. 
Assume that the list will always contain less than 20 integers.

Ex: If the input is: 5 50 60 140 200 75 100

the output is 50, 60,75

The 5 indicates that there are five integers in the list, namely 50, 60, 140, 200, and 75. 
The 100 indicates that the program should output all integers less than 
or equal to 100, so the program outputs 50, 60, and 75.

For coding simplicity, follow every output value by a comma, including the last one.

Such functionality is common on sites like Amazon, where a user can filter results.

*/

#include <stdio.h>
int main(void) {
const int NUM_ELEMENTS = 20;
int userValues[NUM_ELEMENTS]; // Set of data specified by the user
int numOfElement;
int count = 0;
int threshold;
int input;
scanf("%d", &numOfElement); // limit the elements.
while(1){
if(count >= numOfElement){
break;
}
scanf("%d", &input);
userValues[count++] = input;
}
scanf("%d", &threshold);
for(int i = 0; i < numOfElement; i++){
if(userValues[i] <= threshold){
printf("%d,", userValues[i]);
}
}
printf("\n");
return 0;
}