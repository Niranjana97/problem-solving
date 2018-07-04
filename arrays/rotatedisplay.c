/*
Mr. Bean has saved an image in a 2D array and he wants to rotate the image by 90 degrees. Please help him to code for array rotation by 90 degrees.
Given a 2D array, need to rotate the matrix by 90 degrees in the clockwise direction. For example, if the given 2D array is 2 3 4 6 7 8 0 1 5 then the output array should be 0 6 2 1 7 3 5 8 4

Test case
Input (stdin)

2 3 4
6 7 8
0 1 5

Expected Output (stdout)

0 6 2
1 7 3
5 8 4
*/
#include<stdio.h>
#include<stdlib.h>

// Maximum ROW and COLUMN size of a 2D aray
#define S 10  

void rotate_display(int arr[S][S], int n);

// Main Function
int main() 
{
// Row and column size is fixed
int i, j, n=3;  
int a[S][S];

// Get the 2D array values
for(i=0; i<n; i++)
{
    for(j=0; j<n; j++)
    scanf("%d", &a[i][j]);
}
//Function call to rotate and display
rotate_display(a, n);
    return 0;
}
void rotate_display(int arr[S][S], int n)
{
	// Type your code here
  int a[n][n];
  int i,j,x=1;
  for(i=0;i<n;i++) {
    for(j=0; j<n;j++) {
    	a[j][n-x]=arr[i][j];
	}
    x++;
  }
  for(i=0; i<n; i++) {
  	for(j=0;j<n;j++) {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
}
