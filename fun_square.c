#include<stdio.h>
int square();
int main(){
	printf("%d",square());
	return 0;
}
int square(){
	int a;
	printf("enter any number");
	scanf("%d",&a);
	return a*a;
}
