/*
Given a sorted array A of n elements, possibly with duplicates, find the index of the last occurrence of a number in O(log n) time.
Get size of an array 'n' and get n number of elements one by one. Also get the number to be searched 'x'. If x is not present in array print "-1" else print the index of last occurrence of x.

Test case

    Case #1 
    Case #2 
    Case #3 

Input (stdin)

10
1 2 2 2 2 3 4 7 8 8
2

Expected Output (stdout)

4
*/
#include<stdio.h>

int last(int A[], int low, int high, int x, int n)
{
    if (high >= low)
    {
        int mid = low + (high - low)/2;
        //Check whether the last occurence of x is mid element or not
        if (( mid == n-1 || x < A[mid+1]) && A[mid] == x)
            return mid;
        else if (x < A[mid])
            //Call last() function with first half of an array (before mid)
            return last(A, low, (mid -1), x, n);
        else
            //Call last() function with second half of an array (after mid)
            return last(A, (mid + 1), high, x, n);
    }
    return -1;
}
 
int main()
{
    int A[100],n,x,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    scanf("%d",&x);
    printf("%d", last(A, 0, n-1, x, n));
 
    return 0;
}
