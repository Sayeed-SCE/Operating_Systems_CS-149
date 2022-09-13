/* 
Worksheet Three,  5.22 LAB_Elements_in_a_range

Partner1 Name:      Sayeed Najeebullah
partner1 studen ID:  014319227


Partner1 Name:      Mohamed Edris
partner1 studen ID:  014840904

Write a program that first gets a list of integers from input. The input begins with an integer indicating the number of integers that follow. Assume that the list will always contain less than 20 integers.

That list is followed by two more integers representing lower and upper bounds of a range. Your program should output all integers from the list that are within that range (inclusive of the bounds). For coding simplicity, follow each output integer by a comma, even the last one. The output ends with a newline.

Ex: If the input is: 5 25 51 0 200 33 0 50 
    The output should be: 25,0, 33

*/

#include<stdio.h>

int main()
{
int n,i,lower,higher;
int arr[20];
scanf("%d",&n);
for(i=0;i<n;i++)
{

scanf("%d",&arr[i]);
}
scanf("%d %d",&lower,&higher);

for(i=0;i<n;i++)
{
if(arr[i]>=lower && arr[i]<=higher)
printf("%d,",arr[i]);
}
printf("\n");
}
