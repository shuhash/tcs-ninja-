/*
You are required to fix all syntactical errors in the given code. You can click on Compile &
Run anytime to check the compilation/execution status of the program. You can use printf
to debug your code. The submitted code should be logically/syntactically correct and pass 
all testcases. Do not write the main() function as it is not required.
Code Approach: For this question, you will need to correct the given implementation.
We do not expect you to modify the approach or incorporate any additional library. methods
The function/method multiplyNumber returns an integer representing the multiplicative

product of the maximum two of three input numbers. The function/method multiplyNumber

accepts three integers- numA, numB and numc representing the input numbers.

The function/method multiplyNumber compiles unsuccessfully due to syntactical error. 
Your task is to debug the code so that it passes all the test cases.
*/
#include<stdio.h> 
int main()
{
    int a,b,c,max,min,mid;
    scanf("%d %d %d",&a,&b,&c);  //7 8 9  
    max=(a>b)?(a>c ? a:c):(b>c)? b:c;    
    min=(a<b)?(a<c ? a:c):(b<c)? b:c;
    mid=(a+b+c)-(max+min);
    res=max*mid;
    printf("%d",res);
}

























