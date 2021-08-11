/*
Write a programme to find the number of characters and words In a given sentence. 
Input 
First-line contains input string, less than or equal to buffer size N=100. 
Output 
Output contains two integer numbers separated by a new line. 
The first number contains the total number of characters and the second number 
represents the total number of words in the given string. 
Constraints 
N =100 

Example 1: 
Input 
Hello W
Output 
11
2 
Explanation 
String "Hello world” contains a total of 11 characters which includes 1 white space.
It is also a combination of 2 words.
*/
#include<stdio.h>
int main()
{
    char str[100];
    int len,i,sp=0;
    scanf("%[^\n]s",str); 
    for(len=0;str[len]!='\0';len++);  
    for(i=0;i<len;i++) 
      {
          if(str[i]==' ')
             sp++;
      }
      printf("%d\n%d",len,sp+1);
}
















