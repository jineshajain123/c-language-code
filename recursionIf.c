#include<stdio.h>
int i=0;
int main()

{
    //static int=0;  
    printf("ask me\n");
    i++;
        
    if(i<5)
    {
        main(); //recursive calling
    }
}