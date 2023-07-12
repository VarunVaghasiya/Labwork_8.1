//Write a program to find the length of a 1D array.
/*
Input:
Enter array size:5
Enter array elements:
a[0]
a[1]
a[2]
a[3]
a[4]

output:
Length of an array:5
*/

#include<stdio.h>

void main(){
int v,n,c=1;

printf("Enter the array size :- ");
scanf("%d",&n);

int count[n];

for(v=0;v<=n;v++){
	printf("n[%d]=",v);
	scanf("%d",&count[n]);
	c++;
}
  printf("Length of array is %d",c-1);
}
