#include <stdio.h>

int main() {
    char vwl;
   printf("Enter the character: ");
    scanf("%c",&vwl);
    switch(vwl){
        case 'A' : printf("VOWEL"); break;
        case 'E' : printf("VOWEL"); break;
        case 'I' : printf("VOWEL"); break;
        case 'O' : printf("VOWEL"); break;
        case 'U' : printf("VOWEL"); break;
        case 'a' : printf("VOWEL"); break;
        case 'e' : printf("VOWEL"); break;
        case 'i' : printf("VOWEL"); break;
        case '0' : printf("VOWEL"); break;
        case 'u' : printf("VOWEL"); break;
        
        default : printf("its not an vowel");
    }
    return 0;
}