/*
Pradeep is designing the input interaction for X-O game (a.k.a TIC-TAC-TOE). The user identifies the positions as 1|2|3 --------- 4|5|6 --------- 7|8|9 Since the board is a 2-dimensional layout (3x3), pradeep uses a 2-dimensional array to store board status and he identifies positions by row,column as 0,0|0,1|0,2 ---------------- 1,0|1,1|1,2 ---------------- 2,0|2,1|2,2 Help pradeep to solve the conversion from user's input (1-9) to (Row, Column) <0-2>,<0-2>. For example if user gives input as 6 then your code should return row=1 and column=2

Test case
Input (stdin)

9

Expected Output (stdout)

Row = 2; Column = 2;
*/
#include <stdio.h>

int getRow(int n);

int getCol(int n);
    
int main() {
    int n;
	// Get number of elements
	scanf("%d",&n);
    
    printf("Row = %d; Column = %d;", getRow(n), getCol(n));
	return 0;
}

int getRow(int n) {
    // Type your code
  if(n%3==0)
    return (n/3)-1;
  else
    return (n/3);
}

int getCol(int n) {
    // Type your code
  if(n%3==0)
    return 2;
  else
    return (n%3)-1;
}
