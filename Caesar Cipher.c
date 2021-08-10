/*
Caesar Cipher:
The Caesar cipher is a type of substitution cipher in which each 
alphabet in the plaintext or message is shifted by a number of places down the alphabet.
For example, with a shift of 1, P would be replaced by Q, Q would become R, and so on. 
To pass an encrypted message from one person to another, it is first necessary that
both parties have the 'key' for the cipher, so that the sender may encrypt it and
the receiver may decrypt it.the key is the number of OFFSETs to shift the cipher
alphabet. Key can have basic shifts from 1 to 25 positions as there are 26 total 
alphabets. 
As we are designing custom Caesar Cipher, in addition to alphabets, we are 
numeric digits from 0 to 9. Digits can also be shifted by key places.
 For example, if given plain text contains any digit with value 5 and key = 2,
 then 5 will be replaced by 7. “-” (Minus sign) will remain as it is.
 Key value less than 0 should result into "INVALID INPUT" 
Example 1:
 Input:
 Enter your PlainText: All the Best 
Enter the Key: 1
 Output: 
The encrypted Text is: BmmuifCftu
 Write a function customCaesarCipher(int key, String message) which will accept
 plaintext and key as input parameters and returns its cipher text as output.
*/

#include<stdio.h>
void customCaesarCipher(int key,char *str)
{  
   int len,i;
   for(len=0;str[len]!='\0';len++);   //return string length 
   if(key<0)
     printf("INVALID INPUT");
   else 
   {
       for(i=0;i<len;i++)    //0 to 12
       { 
          if(str[i]!=' ')
           {
           if(str[i]>=65 && str[i]<=90)   //upper case 
             {
                str[i]=str[i]+key; 
                if(str[i]>90) 
                  str[i]=str[i]-26;  
             }
            else if(str[i]>=97 && str[i]<=122)   //lower case 
             {
                str[i]=str[i]+key; 
                if(str[i]>122) 
                  str[i]=str[i]-26;  
             }
            else 
            {
                str[i]=str[i]+key;
                if(str[i]>57)
                  str[i]=str[i]-10;
              }
         }
        }
       }
     for(i=0;i<len;i++)
      {
        if(str[i]!=' ')
       printf("%c",str[i]);
      }
}
int main()
{
    char str[100];
    int key;
    scanf("%[^\n]s",str); //bYe 7K9 o9u
    scanf("%d",&key);  //3 
    customCaesarCipher(key,str);
}






















 
