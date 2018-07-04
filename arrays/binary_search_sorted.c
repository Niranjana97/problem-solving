/*
Program to search an element using Binary Search in a sorted array.
Given the sorted array, find the search element and print its position. The first line of input will be the size of array say n, and followed by n elements. The last line of input will be the element to be searched. For example, Input: 6 1 6 8 9 11 15 6 Output: 2

Test case
Input (stdin)

6
1 6 8 9 11 15
6

Expected Output (stdout)

2
*/
#include<stdio.h>
void binary_search(int arr[], int search, int n);
int main()
{
	int n, i, arr[50], search;
	// Get the size of an array
  
  	scanf("%d",&n);
  	// Get the array elements
  
	for (i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
  
  	// Get the search element
	scanf("%d", &search);
	
	binary_search(arr, search, n);
}
	
void binary_search(int arr[], int search, int n)
{
	// Type your code here
  int low=0,mid,high=n,flag=0;
  while(low<=high) {
    mid=(low+high)/2;
    if(arr[mid]==search)  {
      flag=1;
      break;
    }
    else if(search>arr[mid])
      low=mid+1;
    else
      high=mid-1;
  }
  if(flag==1)
    printf("%d",mid+1);
  else
    printf("Not found");
}
