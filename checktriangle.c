#include<stdio.h>
#include<conio.h>



int main(){
   int a,b,c;
   printf("enter the sides of triangle a=");
   scanf("%d",&a);
   printf("enter the sides of triangle b=");
   scanf("%d",&b);
   printf("enter the sides of triangle c=");
   scanf("%d",&c);

   if(a==b&&b==c&&c==a){
      printf("equilateral triangle");
   }
   else if((a==b&&b==a)||(b==c&&c==b)||(c==a&&a==c)){
      printf("isosceles triangle");
   }
   else{
      printf("scalen triangle");
   }
   return 0;
}

