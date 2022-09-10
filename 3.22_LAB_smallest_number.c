/* 
Worksheet Two,  3.22_LAB_smallest_number

Partner1 Name:      Sayeed Najeebullah
partner1 studen ID:  014319227

Partner1 Name:      Mohamed Edris
partner1 studen ID:  014840904
*/
/*
Write a program whose inputs are three integers, and whose output is the smallest of the three values.

Ex: If the input is: 7 15 3

the output is: 3
*/



#include <stdio.h>

int main (void){
	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);

	if(num1 < num2 && num1 < num3) {

		printf("%d\n", num1);
	}
	if (num2 < num3){

		printf("%d\n", num2);
	}
	else {
	printf("%d\n", num3);
	}
	return 0:
}