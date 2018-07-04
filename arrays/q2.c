/*
Program to print 50 stars in below format.
Get the value of 'm'. Print m number of stars in each line. For example if the value of m=8, then the output will be ******** ******** ******** ******** ******** ******** ** First 6 lines has m number of stars(6*8=48 stars). We have to print 50 stars. Remaining 2 stars printed in new line.

Test case 
Input (stdin)

8

Expected Output (stdout)

********
********
********
********
********
********
**
*/
#include<stdio.h>
int main()
{
  
  int n,i,j,count;
  scanf("%d",&n);
  int x=50/n;
  count=50%n;
  for(i=0;i<x;i++){
    for(j=0;j<n;j++){
    	printf("*");
    }
    printf("\n");
  }
  for(i=0;i<count;i++) {
    printf("*");
  }
  return 0;
}
