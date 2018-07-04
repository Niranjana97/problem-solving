/*
Get size of array 'n' , n number of elements and a number K. Insert a number in a given array such that the bitwise XOR of all the elements will give the value K. Print that inserted number as an output.
Bitwise XOR operation: 0 ^ 0 = 0 0 ^ 1 = 1 1 ^ 0 = 1 1 ^ 0 = 0 Input: 5 5 3 7 8 1 18 Output: 26

Test case
Input (stdin)

5
1 2 3 4 5
10

Expected Output (stdout)

11
*/
#include<stdio.h>
int main()
{
  //Type your code here
  int n,k,i,xor=0;
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++) {
    scanf("%d",&arr[i]);
  }
  scanf("%d",&k);
  for(i=0;i<n;i++) {
    xor=xor^arr[i];
  }
  printf("%d",xor^k);
  return 0;
}
