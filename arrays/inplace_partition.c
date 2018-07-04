/*
An array consists of both positive and negative numbers. Rearrange it such that all negative elements are before the positive elements in the array. This has to be done in-place i.e., extra space should not be used like creating another array. For example, if the array is "int a[] = {5,9,-7,2,-3};" then it should be rearranged as "a[] = {-7,-3,5,2,9};" The partitioning is -7,-3 | 5,2,9 i.e., numbers less than 0 appears before numbers greater than or equal to 0
Hint: Challenge yourself by not looking at the hint. -> Have a loop variable for scanning each element in array. -> Have another variable to remember index-of-last-saved-negative-number. When the program starts, this variable will be -1. -> Algo: Scan each element in array If current element is negative swap current element with (index-of-last-saved-negative-number + 1)th element

Test case
Input (stdin)

10
-9
0
1
2
3
-1
-2
-3
44
444

Expected Output (stdout)

-9
-1
-2
-3
3
0
1
2
44
444
*/
#include <stdio.h>

void partitionArray1(int arr[], int number_of_elem);

int main() 
{
  int arr[100];
  int number_of_elem, i;
  
  // Get the number of elements in array
  scanf("%d", &number_of_elem);
  
  // Get the array 
  for(i=0; i<number_of_elem; i++) {
    scanf("%d", &arr[i]);    
  }
  
  partitionArray1(arr, number_of_elem);
  
  // Print after partitioning
  for(i=0; i<number_of_elem; i++) {
    printf("%d\n", arr[i]);    
  }
  
  return 0;
}

void partitionArray1(int arr[], int n) {
  // Type your code here
  int i=0,j=-1;
  while(i<n) {	
    if(arr[i]<0) {
      int tmp=arr[i];
      arr[i]=arr[j+1];
      arr[j+1]=tmp;
      j++;
      i++;
    }
    else
      i++;
  }
 
}
