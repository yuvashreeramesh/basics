#include <stdio.h>
#include<string.h>
int main()
{
    char word[60];
    int leng, i;
    printf("Program in C for reversing a given string \n ");
    printf("Please insert the string you want to reverse: ");

   
    scanf( "%s", word );

    
    leng = strlen(word);

    
    for(i = leng - 1; i >= 0; i--) {
        printf("%c", word[i]);
    }
    
    return 0;
}
