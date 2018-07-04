/*
Clara wants to save rank of each student in her class and has a peculiar requirement of finding ranks of two students at a time. She has created a two dimensional array to save rank and roll number. She wants to write a function taking inputs - 1) array holding rank and roll number 2) total number of students 3) roll number of student 1 and student 2 whose ranks have to be found. The function has to return two values - rank of student 1 and rank of student 2. She has almost completed the code except for the multiple return values. Help her through.

Test Case 1
2
1
301
2
302
301
302

Expected Output (stdout)

student 1 rank 1
student 2 rank 2

*/
#include <stdio.h>

#define MAX_STUDENT_COUNT 10

// Type your code to fill in the arguments and implementation
// part to return multiple values
void findElementsInArray(int a[][2],int n,int r1,int r2,int *p1) 
{
  	int i,j;
  for(i=0;i<n;i++) {
      if(a[i][1]==r1) 
        p1[0]=a[i][0];
      if(a[i][1]==r2) 
        p1[1]=a[i][0];
      
  }
}

int main() {
	// one column for rank and another column for student roll no
	int arr[MAX_STUDENT_COUNT][2]; 
	
	int i, n, stud1Rollno, stud2Rollno, stud1Rank, stud2Rank;
	
	// Get the no of students in the class
	scanf("%d",&n);
	
	// Get the rank and rollno of each student
	for(i=0; i<n; i++) {
	    scanf("%d",&arr[i][0]);
	    scanf("%d",&arr[i][1]);
	}
	
	// Get the two students rollno to find their ranks
	scanf("%d", &stud1Rollno);
	scanf("%d", &stud2Rollno);
	int p[2];
    // Type your code to call function findElementsInArray
    // Results should be saved in variables stud1Rank and stud2Rank
  findElementsInArray(arr,n,stud1Rollno,stud2Rollno,&p);
	stud1Rank=p[0];
  	stud2Rank=p[1];
    printf("student 1 rank %d\n",stud1Rank);
    printf("student 2 rank %d",stud2Rank);
	
	return 0;
}
