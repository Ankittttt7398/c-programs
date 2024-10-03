#include<stdio.h>

void main(){
    float celcius;
    printf("Enter the temperature in celcius= ");
    scanf("%f",&celcius);
    if(celcius<0){
        printf("Freezing weather");
    }
    else if(celius>=0&&celcius<=10){
        printf("Cold very cold weather");
    }
    else if (celcius>10&&celcius<=20)
    {
        printf("Cold weather ");
    }
    else if (celcius>20&&celcius<=30)
    {
        printf("Normal in temperature ");
    }
    else if (celcius>30&&celcius<=40)
    {
        printf("It's Hot ");
    }
    else if (celcius>=40)
    {
        printf("It's very Hot ");
    }
}