/*
"The Duck and the golden egg" The duck has hidden its golden egg somewhere in the M x N grid, to seize the golden egg we need to traverse the board spirally starting with the index 0,0. The last index position in the spiral path is where the golden egg is hidden. Find the spiral path to reach the golden egg.
Input: 3 4 1 2 3 4 6 7 0 9 11 2 1 6 Output: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 0 Explanation: The first line of input will be the row size (M), column size(N) of an array and followed by the M x N array elements. The output is to print the M x N array spirally starting with the index 0,0.

Test case
Input (stdin)

3 4
1    2   3   4
6    7   0   9
11  2   1   6

Expected Output (stdout)

1 2 3 4 9 6 1 2 11 6 7 0
*/
#include<stdio.h>
void print_spirally(int row, int column);
#define S 10
int a[S][S];
int main()
{
    int row, column;
    
    // Get the row and column size of an array
    scanf("%d %d", &row, &column);
    
    // Get the array elements
    int i, j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    print_spirally(row, column);
    
    return 0;
}
  
void print_spirally(int row, int col)
{
	// Type your code here
  int i;
  int k=0,l=0,m=row,n=col;
    while(k<m && l<n) {
            for(i=l;i<n;i++) 
              printf("%d ",a[k][i]);
      k++;
      for(i=k;i<m;i++) 
        printf("%d ",a[i][n-1]);
      
      n--;
      if(k<m) {
      for(i=n-1;i>=l;i--) 
        printf("%d ",a[m-1][i]);
      
      m--;
      }
      if(l<n) {
      for(i=m-1;i>=k;i--)
        printf("%d ",a[i][l]);
      
      l++;
      }
 }
}
