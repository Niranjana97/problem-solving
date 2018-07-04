/*
Program to make all rows and columns of a cell 0 if it's 0 in a given 2D array.
The 3 X 4 matrix (2D array - row value as 3 and column value as 4) will be given as an input. Need to make all rows and columns of a cell 0 if any of its corresponding row value or column value is zero. For example, Input: 1 1 1 1 1 0 1 0 1 0 1 0 Output: 1 0 1 0 0 0 0 0 0 0 0 0

Test case

Input (stdin)

1 1 1 1
1 0 1 0
1 0 1 0

Expected Output (stdout)

1 0 1 0
0 0 0 0
0 0 0 0
*/
#include <stdio.h>
#define R 3
#define C 4
void cell_changes(int array[R][C]);
void display_array(int array[R][C]);

// Main function
int main()
{
   // Store the array elements in 2D array
   int arr[R][C];
   int i, j;
   
   for(i=0; i<R; i++)
   {
       for(j=0; j<C; j++)
       {
           scanf("%d", &arr[i][j]);
       }
   }
 
    // Function call to modify the given matrix
    cell_changes(arr);
    
    // Function to display the modified matrix
    display_array(arr);
    
    return 0;
}   // End of the main function


void cell_changes(int arr[R][C])
{
  //Type your code here
  int i,j;
  int row[R]={1,1,1},col[C]={1,1,1,1};
  for(i=0;i<R;i++){
    for(j=0;j<C;j++) {
      if(arr[i][j]==0) {
        row[i]=0;
        col[j]=0;
      }  
    }
  }
    for(i=0;i<R;i++){
      if(!row[i]) {
        for(j=0;j<C;j++) 
          arr[i][j]=0;
      }
    }
    for(j=0;j<C;j++) {
      if(!col[j]) {
        for(i=0;i<R;i++) 
          arr[i][j]=0;
      }
    }
      
  
}

void display_array(int arr[R][C])
{
 
  //Type your code here
  int i,j;
  for(i=0;i<R;i++) {
    for(j=0;j<C;j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  
}
