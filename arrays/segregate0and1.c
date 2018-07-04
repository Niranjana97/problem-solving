/*
C - Program to Segregate 0s and 1s
You are given an array of 0s and 1s in random order. Segregate 0s on left side and 1s on right side of the array.

Test case
Input (stdin)

6
0 1 0 1 1 1

Expected Output (stdout)

0 0 1 1 1 1

*/
#include<stdio.h>
    int main()
    {
      //Type your code here
      int n,i=0,j=0,c0=0,c1=0;
      scanf("%d",&n);
      int arr[n];
      for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
      }
      
      for(i=0;i<n;i++) {
        if(arr[i]==0)
           c0++;
        else
           c1++;
      }
      for(i=0;i<c0;i++) {
        arr[i]=0;
        printf("%d ",arr[i]);
      }
      for(i=c0;i<c0+c1;i++) {
        arr[i]=1;
        printf("%d ",arr[i]);
      } 
      return 0;
    }
