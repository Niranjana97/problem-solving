/*
Program to find Anagram. An anagram is a word formed by rearranging the letters of a different word, using all the letters exactly once. For example, the word FACE can be rearranged into "CAFE". Hence FACE and CAFE are anagrams.
Get 2 strings as an input from the user. If those 2 strings are anagrams then print "Anagram" else print "Not an Anagram".

Test case
Input (stdin)

LISTEN
SILENT

Expected Output (stdout)

Anagram
*/
#include <stdio.h>
#include <string.h>
#include<ctype.h>
int Anagram(char str1[], char str2[]);
int main()
{
   		char str1[20];
   		char str2[20];
   		scanf("%s%s",str1,str2);
   		if (Anagram(str1, str2))
       		printf("Anagram");
   		else
    	   	printf("Not an Anagram");
   		return 0;
}
int Anagram(char str1[], char str2[])
{
   //Type your code here
 	int i,j,flag=0;
  	int alpha[26];
  for(i=0;i<26;i++) {
    alpha[i]=0;
  }
  
  int l1=strlen(str1),l2=strlen(str2);
  if(l1==l2) {
    for(i=0;i<l1;i++) {
      str1[i]=tolower(str1[i]);
      str2[i]=tolower(str2[i]);
      alpha[str1[i]-97]++;
      alpha[str2[i]-97]++;
    }
  }
  else flag=1;
  for(i=0;i<26;i++) {
    if(alpha[i]%2==1) 
      flag=1;
  }
  if(flag==0)
    return 1;
  else
    return 0;
}
