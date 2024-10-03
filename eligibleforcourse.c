#include<stdio.h>
int main(){
    int maths,phy,chem;
    printf("enter the marks obtained in physics= ");
    scanf("%d",&phy);
    printf("enter the marks obtained in chemistry= ");
    scanf("%d",&chem);
    printf("enter the marks obtained in maths= ");
    scanf("%d",&maths);

    if(maths+phy+chem>=190&&maths+phy>=140){
        printf("The candidate is eligible");
    }
    else{
        printf{"The candidate is not eligible"};
    }
    return 0;
}