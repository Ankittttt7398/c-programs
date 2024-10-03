#include<stdio.h>
 int main(){
    int roll ;
    char name;
    float phy,chem,maths;
    printf("Enter roll no. of the student= ");
    scanf("%d",&roll);
    printf("Enter the name of the student= ");
    scanf("%s",&name);
    printf("Enter the marks of physics= ");
    scanf("%f",&phy);    
    printf("Enter the marks of chemistry= ");
    scanf("%f",&chem);
    printf("Enter the marks of maths= ");
    scanf("%f",&maths);
    printf("ROll no..: %d\n",roll);
    printf("Name: %s\n",name);
    printf("Physics: %f\n",phy);
    printf("Chemistry= %f\n",chem);
    printf("Maths: %f\n",maths);
    float Total=phy+chem+maths;
    printf("Total marks= %f\n",Total);
    float per=(Total/300)*100;
    printf("Percentage= %f\n",per);

    if(per>=60 && per<=100){
        printf("Division= First");
    }
    else if (per>=45&&per<=60)
    {
         printf("Division= Second");
    }
    else if("per>=33&&per<=45"){
            printf("Division=Third");
    }
    else{
        printf("Fail");
    }
    return 0;
}