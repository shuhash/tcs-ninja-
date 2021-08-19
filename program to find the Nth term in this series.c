/*
Consider the below series:
1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17…..
This series is a mixture of 2 series fail the odd terms in this series form a Fibonacci series and
all the even terms are the prime numbers in ascending order
Write a program to find the Nth term in this series
The value N in a positive integer that should be read from mm. The Nth term that is calculated
by the program should be written to STDOUT Otherthan the value of Nth term , no other
characters / string or message should be written to STDOUT. 

For example, when N:14, the 14th term in the series is 17 So only the value 17 should be
printed to STDOUT


n--> odd
odd-->fib 

1 1 2 3 5 8 ......

1--> 1 
3--> 2 
5--> 3 
7--> 4 
9--> 5

n--> n/2+1

n is even  

2 --> 1 
4 --> 2  
6 --> 3 
8 --> 4 
10 --> 5

n--> n/2  
*/

#include<stdio.h>
int fib(int n)
{
    if(n==1 || n==2)
      return 1;
    else 
        return fib(n-1)+fib(n-2);
}
int prime(int n)
{
    int i,c=0;
   for(i=1;i<=n;i++)
   {
       if(n%i==0)
          c++;
   }
   if(c==2)
     return 1;
   else 
     return 0;
 }
int main()
{
    int n,ans,c,num;
    scanf("%d",&n);
    if(n%2==1)  //odd --> fib
    {
      ans=fib(n/2+1); 
    }
    else
    {
       c=0,num=2;
       while(c!=n/2)  
       {
           if(prime(num)==1)
              c++;    
             num++;  
       }
        ans=num-1;      
    }
    printf("%d",ans);
    
}

























