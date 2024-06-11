#include<stdio.h>
int main()
{
    int ch;
    printf("enter a character:");
    scanf("%c",&ch);

    switch (ch)
     {
        case 'a' : printf("vowel",ch); break;
        case 'e' : printf("vowel",ch); break;
        case 'i' : printf("vowel",ch); break;
        case 'o' : printf("vowel",ch); break;
        case 'u' : printf("vowel",ch); break;
        default: printf("consonent");
    }
}