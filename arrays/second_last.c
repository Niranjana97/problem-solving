/*
Given a array and a number(say n1), find the second last occurence of n1 and print its array index.
Your function will accept the number as argument and return the 2nd last occurence index. If the number does not occur or occurs only once, return -1.

Test case
Input (stdin)

5
1
1
2
3
4
1

Expected Output (stdout)

second last occurrence index = 0
*/
#include <stdio.h>

int get_2nd_last_occurence(int arr[], int number_of_elem, int elem_to_search);

int main() 
{
  int arr[100];
  int number_of_elem, elem_to_search, i;
  
  // Get the number of elements in array
  scanf("%d", &number_of_elem);
  
  // Get the array 
  for(i=0; i<number_of_elem; i++) {
    scanf("%d", &arr[i]);    
  }
  
  // Get the element to search
  scanf("%d", &elem_to_search);
  
  printf("second last occurrence index = %d", get_2nd_last_occurence(arr, number_of_elem, elem_to_search));
  return 0;
}

int get_2nd_last_occurence(int arr[], int n, int key) {
  // Type your code here
  int count=0,i;
  for(i=n-1;i>=0;i--) {
    if(arr[i]==key) 
      count++;
    if(count==2)
      return i;
  }
  return -1;
}
