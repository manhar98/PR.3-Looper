#include <stdio.h>

int main(){
    printf("Q-1. Alphabet Skipper \n");
    char ch = 'a';
    
    do{
        printf("%c", ch);

        if(ch + 4 <='z'){
            printf(", ");
        }

        ch = ch + 4;
    }while(ch <= 'z');
    printf("\n\n");




    printf("Q-2. Digit Counter\n");

    int num, count = 0;
    printf("Enter any number: ");
    scanf("%d", &num);

    while(num != 0){
        count++;
        num = num / 10;
    }
    printf("Total number of digit: %d",count);

    printf("\n\n");



    printf("Q-3. Digit Addition \n");

    int num2, first, last;
    
    printf("Enter any number: ");
    scanf("%d", &num2);

    last = num2 % 10;
    while (num2 / 10){
        num2 = num2 /10;
    }
    first = num2;
    printf("Sum first and last %d", first + last);

}