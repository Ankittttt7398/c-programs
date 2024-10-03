#include<stdio.h>

void main(){
    int id;
    char name[100];
    float unit;
    printf("Enter your Id: ");
    scanf("%d\n",&id);
    printf("Enter your name: ");
    scanf("%s",&name);
    printf("%s\n",name);
    printf("Enter your electricity consumed unit: ");
    scanf("%f",&unit);
    if(unit>=0&&unit<=199){
        print("Total electricity bill: Rs %f",unit*1.20);
    }
    else if(unit>=200&&unit<=400){
        print("Total electricity bill: Rs %f",unit*1.50);
    }
    else if(unit>=400&&unit<=600){
        print("Total electricity bill: Rs %f",unit*1.80);
    }
    else if(unit>=600){
        print("Total electricity bill: Rs %f",unit*2.00);
    }
}