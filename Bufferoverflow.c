#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//This define for styling the font colors.

#define ANSI_COLOR_RED     "\x1b[31m"  
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"
int main(){

    printf("-----------------------------------------------------------\n");
    printf(ANSI_COLOR_GREEN"DEMONSTRATION OF"ANSI_COLOR_RESET ANSI_COLOR_RED" BUFFEROVERFLOW\n" ANSI_COLOR_RESET);
    printf("-----------------------------------------------------------\n");
    char string[10]; //Getting the user input with fixed buffer size of 10.

    char buffer[10]; //Declaring the buffer array to demonstrate the overflow when the user input exists the size of 10.
    printf("\nEnter the string (max 10 chars):");

    //Here considering the input from the user with whitespace.

    scanf("%10[^\n]", string);
    
    printf("The entered string is:%s \n",string );
    printf("-----------------------------------------------------------\n");

    printf("To demonstrate the bufferoverflow,Enter the string that it must have more than 10 characters:");
    
    //Again getting an input from user for the string more than 10 characters and assigning to the array string.

    scanf(" %[^\n]",string);
    
    printf("\nAfter overflows of Buffer,printing the string and buffer overflow of char that appeared in buffer string..\n ");
    
    printf("\nString: %s",string);

    //Here this will print the overflowed buffer characters when the string array length exceeds 10,and the remaing characters accumulate the array buffer due to the overflow.

    /*
    
    1.Each char takes one byte of memory.  
        -> Array string takes 10 byte of memory which can store upto 9 characters + null terminator.
    
    2.When the string length exceeds 10,the overflow occurs into the buffer array.It's due to the memory allocation for the array string and buffer.

        ->Let's consider the memory address of string is:0x7ffd3e90e6e4 and for buffer is:0x7ffd3e90e6ee
        CASE 1: 
            INPUT STRING: SUBASH Y => Here the length of the string is 9
            Suppose if the user enters again less than 10 char then there will be no overflow occurs.

        CASE 2:
            INPUT STRING: SUBASH Y => Here the length of the string is 9

            If user enter the string more than 10 characters then overflow occurs.

            STRING: S U B A S H   Y U V A  R  A  J \0
            INDEX : 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14

            ->From char A index[10] the memory address will start from the array buffer addresses(0x7ffd3e90e6ee),so which it leads to the overflow
            
            Then it prints,

            String: SUBASH YUVARAJ ->Because it will print until it finds out the null.
            Buffered String: ARAJ  ->It prints because the overflow characters are stored in the buffer array.
        
        CASE 3:[Input buffering behaviour]

            INPUT STRING: SUBASHYUVARAJ =>Here the length of the string is 14.
            
            ->  If the user enters more characters than expected, some characters may remain unread in the standard input (stdin). 
                These leftover characters can be taken as input by the next scanf call.
                This happens due to how scanf reads input from stdin and is different from a buffer overflow,
                which involves writing beyond the allocated memory of the array.
            

    => The observed overflow is undefined and may vary by system.

    */

 
    printf("\nBuffered String: %s\n",buffer);
    
    printf("-----------------------------------------------------------\n");

   return 0;

}