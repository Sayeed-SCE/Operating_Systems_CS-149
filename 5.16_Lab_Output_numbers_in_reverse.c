/*
Worksheet Three,  5.16_Lab_Output_numbers_in_reverse

Partner1 Name:      Sayeed Najeebullah
partner1 studen ID:  014319227


Partner1 Name:      Mohamed Edris
partner1 studen ID:  014840904

Write a program that reads a list of integers, and outputs those integers in reverse. The input begins with an integer indicating the number of integers that follow. For coding simplicity, follow each output integer by a comma, including the last one. Assume that the list will always contain less than 20 integers.

if the input is: 5 2 4 6 8 10
the output should be 10,8,6,4,2
*/

#include <stdio.h>

int main()
{
    const int NUM_ELEMENTS = 20; // maximum number of input integers i.e size of array
    int userVals[NUM_ELEMENTS]; // array to hold the input integers
    int userSize, i; // variables to hold the number of actual integers input by the user and for loop

    scanf("%d",&userSize); 

    for(i=0;i<userSize;i++)
        scanf("%d",&userVals[i]);

    for(i=userSize-1;i>=0;i--)
        printf("%d,",userVals[i]);

    printf("\n");

    return 0;
}