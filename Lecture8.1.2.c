//Write a program to find the average of a 1D array.

#include<stdio.h>

void main(){

int a,b,sum=0;

printf("Enter the array size :- ");
scanf("%d",&b);

int count[b];

for(a=0;a<b;a++){
	printf("b[%d]=",a);
	scanf("%d",&count[b]);
	sum=sum + count[b];
}

printf("The average value is %d",sum/b);

}
