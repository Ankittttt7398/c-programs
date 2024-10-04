#include<stdio.h>
 int main(){
    char ch;
    int a,b;
    printf("enter first no.");
    scanf("%d",&a);
    printf("enter second no.");
    scanf("%d",&b);
    printf("enter operand : ");
    scanf(" %c",&ch);
    if(ch=='+'){
        printf("sum=%d",a+b);
    }
    else if(ch=='-'){
       printf("sub=%d",a-b); 
    }
    else if(ch=='*'){
       printf("multiplication=%d",a*b); 
    }
    else if(ch=='/'){
       printf("division=%d",a/b); 
    }
    else{
        printf("wrong input");
    }
    return 0;
 }