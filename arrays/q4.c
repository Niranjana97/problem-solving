/*
Vinay and ramu were playing numbers game. Ramu have cubes that has printed numbers on it. Vinay will give single cube with number. Ramu has to join 2 cubes. The sum of these 2 cubes should equal to vinay's cube. Write a program to implement this.
Input 1: 5 4 3 8 0 1 10 Output-1: No perfect couple found! Explanation: Ramu has 5 cubes- 4 3 8 0 1, Vinay has only 1 cube i.e:10. The sum of any 2 cubes will not be equal to vinay's cube. So the output will be No perfect couple found! Input 2: 5 4 3 8 0 1 8 Output-2: Perfect couple: 8 0

*/
#include<stdio.h>
#include<stdlib.h>
void check_sum_and_diplay(int arr[], int size, int sum);
int main()
{
    // Get the size of an array
    int size;
    scanf("%d", &size);
    
    // Get the array elements
    int arr[50], i;
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Get the sum value (to check with an array elements)
    int sum;
    scanf("%d", &sum);
    
  	// Function call to check the sum of any two elements in an array equal to given sum 
  	// and display the same
    check_sum_and_diplay(arr, size, sum);
    return 0;
}

void check_sum_and_diplay(int arr[], int size, int sum)
{
  // Type your code here
  int i=0,j,flag=1;
  for(i=0;i<size;i++) {
    for(j=1;j<size;j++) {
      if(arr[i]+arr[j]==sum) {
        printf("Perfect couple: %d %d",arr[i],arr[j]);
        flag=0;
        return;
      }
    }
  }
  if(flag==1) {
    printf("No perfect couple found!");
    return;
  }
    
}
