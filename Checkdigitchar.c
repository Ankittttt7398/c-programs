#include<stdio.h>
void main(){
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')||(ch>='A'&&ch<=Z){
        printf(" %c is Alphabet");
    }
    else if (ch>=1&&ch<=9)
    {
        printf("%c is a Digit");
    }
    else{
        printf("%c is special character ");
    }
    
}