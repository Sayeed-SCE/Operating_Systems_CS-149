/* 
 Worksheet Three,  5.21 LAB: Contains the character

Partner1 Name:      Sayeed Najeebullah
partner1 studen ID:  014319227


Partner1 Name:      Mohamed Edris
partner1 studen ID:  014840904    


Write a program that reads an integer, a list of words, and a character. The integer signifies how many words are in the list. The output of the program is every word in the list that contains the character at least once. For coding simplicity, follow each output word by a comma, even the last one. Add a newline to the end of the last output. Assume at least one word in the list will contain the given character. Assume that the list will always contain less than 20 words. Each word will always contain less than 10 characters and no spaces.
the input is: 4 hello zoo sleep drizzle z

then the output is: zoo drizzle,

To achieve the above, first read the list into an array. Keep in mind that the character 'a' is not equal to the character 'A'.

Hint: To read in the character after the final word, add a space before %c: scanf(" %c", &searchCharacter);



*/

#include <stdio.h>
 
int CharInWord(char* req_word, char search_char){  //CharInWord() checks whether the charcater is present in each word or not
      int i;
      
      for(i = 0; req_word[i] != '\0' ; i++){  //Traverse the string using for loop 
     
        if(req_word[i] == search_char){       //If the current character in the given word is matched with the 
                                              //character which needs to be found in the word, then return 1.
            return 1;
        }
 }
return 0;
}

int main(void){
     int i, n_words, word_index;  //i is index ,n_words is the number of words ,word_index is the index of every word
     
     char str_word[20][10];       //Max of 20 words and each word is of less than 10 charcaters 
                                  //can be represented as following 2D array
     char search_char;
     scanf("%d", &n_words);
     
     for(i = 0; i < n_words; i++){   //enter the required words using a for loop and store them into an array.

        scanf("%s", str_word[i]);
}

scanf(" %c", &search_char);

for(i = 0; i < n_words; i++){  //Traverse the words stored in the array using a for loop.
     
   if(CharInWord(str_word[i],search_char) != 0){  //Call the function isWordContainChar() which checks if the charcater is present in the
   													//word or not .If present then display the string from the array using comma separated
     printf("%s,", str_word[i]);
   }
}
printf("\n");
return 0;  
}