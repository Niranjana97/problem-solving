/*
Program to find contiguous subsequence whose sum is maximum and its elements are in ascending order.
The first line of input consists of the size(N<20) of an array. The second line contains N elements of positive integers. For example, Input: 6 1 80 3 7 100 10 Output: 110 Explanation: 3 7 100 is the contiguous subsequence with maximum sum.

Test case
Input (stdin)

6
1 80 3 7 100 10

Expected Output (stdout)

110
*/
#include<stdio.h>
int sum_subsequence( int arr[], int n );

// Main functon
int g_max=0;

int main()
{
    //Get the size of an array
    int N;
    scanf("%d", &N);
    
    //Get the N elements of positive integers and store in the array
    int arr[20], i, j;
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    //Function call to find the maximum sum sub-sequence
    printf("%d", sum_subsequence( arr, N ) );
    return 0;
}

/* sum_subsequence() returns the maximum sum increasing subsequence in arr[] of size N */
int sum_subsequence( int arr[], int n )
{
  //Type your code here
 	int run_mss=arr[0],mss=arr[0],i=1;
  	while(i<n) {
      if(arr[i]>arr[i-1]) {
        run_mss+=arr[i];
        if(run_mss>mss)
          mss=run_mss;
        i++;
      }
      else {
        run_mss=arr[i];
        i++;
      }
    }
  return mss;
}
