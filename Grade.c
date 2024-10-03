#include<stdio.h>

void main(){
    char gr;
    printf("Enter your grade: ");
    scanf("%c",&gr);
    if(gr=='e'&&gr=='E'){
        printf("Excellent");
    }
    else if(gr=='v'&&gr=='V'){
        printf("Very Good");
    }
    else if(gr=='g'&&gr=='G'){
        printf("Good");
    }
     else if(gr=='a'&&gr=='A'){
        printf("Average");
    }
     else if(gr=='f'&&gr=='F'){
        printf("Fail");
    }
}