#include<stdio.h>

int main(){
    char ch;
    printf("enter your choice: ");
    scanf(" %c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
        printf(" aplhabet");
    }
    else{
        printf(" consonant");
    }
    return 0;
}