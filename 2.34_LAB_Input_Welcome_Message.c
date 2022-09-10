/* 
Worksheet Two,  2.34_LAB_Input_Welcome_Message

Partner1 Name:      Sayeed Najeebullah
partner1 studen ID:  014319227

Partner1 Name:      Mohamed Edris
partner1 studen ID:  014840904
*/

/*
Write a program that takes a first name as the input, and outputs a welcome message to that name.

Ex: If the input is: Pat

the output is:
Hello Pat, and welcome to CS Online!
*/

#include <stdio.h>

int main(void) {
   char userName[50];
   
   scanf("%s", userName);
   
   printf("Hello %s, and welcome to CS Online!\n", userName);
  

   return 0;
}