//Write a program to perform the addition operation of two 1D arrays & store it in another array. Keep in mind that both array sizes must be the same.

#include<stdio.h>

void main(){
	
	int h,t;
	
	printf("Enter the size of array :- ");
	scanf("%d",&t);
	
	int a[t];
	
	printf("Enter the array size :- ");
	 
	 for(h=0;h<t;h++){
	 	printf("a[%d]=",h);
	 	scanf("%d",&a[h]);
	 }
	 int b[t];
	 
	 printf("Enter b elements\t");
	 for(h=0;h<t;h++){
	 	printf("b[%d]=",h);
	 	scanf("%d",&b[h]);
	
    }
	 int c[t];
	 for(h=0;h<t;h++){
	 	
	 	c[h]=a[h]+b[h];
	
	 }
	 for(h=0;h<t;h++){
	 	printf("array c is c[%d]=%d\n",h,c[h]);
	 }
}
