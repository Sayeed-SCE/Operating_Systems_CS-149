/* 
Worksheet Three,  5.23 LAB_Two_smallest_numbers

Partner1 Name:      Sayeed Najeebullah
partner1 studen ID:  014319227


Partner1 Name:      Mohamed Edris
partner1 studen ID:  014840904

Write a program that reads a list of integers, and outputs the two smallest integers in the list, in ascending order. The input begins with an integer indicating the number of integers that follow. You can assume that the list will have at least 2 integers and less than 20 integers.

Ex: If the input is: 5 10 5 3 21 2
 	The output is: 2 and 3

 To achieve the above, first read the integers into an array.

Hint: Make sure to initialize the second smallest and smallest integers properly


*/

#include <stdio.h>
#include <limits.h> // use to assign INT_MAX
int main()
{
    int no_of_integer; 
    int first_min, second_min; // variable to store first and second smallest value
    int i;
    scanf("%d", &no_of_integer); 
    int list[no_of_integer]; 
    
    for (i=0;i<no_of_integer;i++) {
        scanf("%d", &list[i]);  
    }
   
    first_min= INT_MAX; // Initialize both first_min and second_min as INT_MAX
    second_min= INT_MAX;
   for (i=0;i<no_of_integer;i++){
        if (list[i] < first_min) // Now if current element is smaller than first
        {
            second_min = first_min; // update both first_min and second_min
            first_min = list[i];
        }    
        else if (list[i]<second_min && list[i] != first_min){ // if current element is  in between first and second  
           second_min = list[i];
        }
            
    }
    printf("%d and %d\n",first_min,second_min);
    return 0;
}
