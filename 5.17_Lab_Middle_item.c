/*
Worksheet Three,  5.17_Lab_Middle_item

Partner1 Name:      Sayeed Najeebullah
partner1 studen ID:  014319227


Partner1 Name:      Mohamed Edris
partner1 studen ID:  014840904


Given a sorted list of integers, output the middle integer. A negative number indicates the end of the input (the negative number is not a part of the sorted list). Assume the number of integers is always odd.

Ex: If the input is: 2 3 4 8 11 -1 

the output should be: Middle item: 4

The maximum number of list values for any test case should not exceed 9. If exceeded, output "Too many numbers".

Hint: First read the data into an array. Then, based on the array's size, find the middle item.



*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[9];
                     
    int num, n = 0; // initialize n to 0 (length of array)
    
    
    while(1) {
        scanf("%d", &num);
        
        // if a negative number occurs, then break the loop
        if(num < 0)
            break;
            
        // update the array and increment n
        arr[n] = num;
        n++;
        
        // if length exceeds 9, exit from the program
        if(n > 9) {
            printf("Too many numbers\n");
            exit(0);
        }
    }
    
    // print the middle element
    printf("Middle item: %d\n", arr[n/2]);

    return 0;
}