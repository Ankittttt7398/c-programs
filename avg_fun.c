 #include<stdio.h>
 int avg(int,int,int,int);
 int main(){
 	int a,b,c,d;
 	printf("enter any four no.: ");
 	scanf("%d%d%d%d",&a,&b,&c,&d);
 	printf("average: %d",avg(a,b,c,d));
 	return 0;
 }
 
 int avg(int a,int b,int c,int d){
 	return (a+b+c+d)/4;
 }
