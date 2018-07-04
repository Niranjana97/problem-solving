/*
English teacher informed the highest mark scored in her test in the class. Your task is to find the second highest mark.
Marks scored in the test is saved in an array and you have to find the second maximum in the array.

Test case
Input (stdin)

5
100
200
9
400
130

Expected Output (stdout)

second highest mark = 200
*/
#include <stdio.h>

int find_second_max(int arr[], int no_of_students);

int main() {
	//code
	int no_of_students, marks_list_array[100], i;
	scanf("%d", &no_of_students);
	for(i=0; i<no_of_students; i++) {
	    scanf("%d",&marks_list_array[i]);
	}
	
	printf("second highest mark = %d", find_second_max(marks_list_array, no_of_students));
	
	return 0;
}

int find_second_max(int arr[], int no_of_students)
{
    // Type your code here
  int max=arr[0],sec_max=arr[0],i;
  if(arr[0]>arr[1]) {
    max=arr[0];
    sec_max=arr[1];
  }
  else {
    max=arr[1];
    sec_max=arr[0];
  }
  for(i=2;i<no_of_students;i++) {
   	if(arr[i]>sec_max) {
      sec_max=max;
    if(arr[i]>max)
      	max=arr[i];
    }
    
  }
  return sec_max;
  
}
