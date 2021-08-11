/*
Vincent is a mathematician and always plays with numbers. 
He has a number ‘N’ and wants to print all the numbers smaller than N such that:
1.printed numbers are not less than 2
2.each printed number has only two factors
Input Format
Input contains an integer ‘N’ denoting the number
Output Format
All the numbers smaller than N by satisfying condition 1 and 2.
If output numbers are more than one then each output is separated by 
a single space character.
Constraints
1<=N<=10^8
Sample 1:
Input
10
Output
2 3 5 7
*/
#include<stdio.h>
int prime(int n)  //15
{ 
  int i,c=0;
   for(i=1;i<=n;i++)  
   {
       if(n%i==0)  //1 7 
         c++; //c=2
   }
   if(c==2)
     return 1;
    else 
     return 0;
}
int main()
{
    int n,i;
    scanf("%d",&n); //10
    for(i=2;i<=n;i++) // 2 3 4 5 6 7 8 9 10
    {
       if(prime(i)==1)
        printf("%d ",i); //2  3 5 7 
    }
}






















