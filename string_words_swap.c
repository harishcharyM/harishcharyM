       

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    char str[100] = "Ravi is very good boy";
   char *ptr[5] ;
   int j = 0; 
   ptr[j] = str;
   j++;
   for(int i = 0 ; i < strlen(str); i++)
   {
       if(str[i] == ' ')
       {
            ptr[j] = str+i+1;
            j++;
       }
   }
   
   for(int j = 0; j< 5; j++)
   {
       for(int i = 0; i < 5; i++)
       {
           if(ptr[j][i] != ' ')
           {
               continue;
           }
           else 
           {
               ptr[j][i] = '\0';
           }
       }
   }
   for(int j = 0; j < 5; j++)
   {
       for(int i = 0; i < strlen(ptr[j]); i++)
       {
           printf("%c",ptr[j][i]);
       }
       printf(" ");
   }
   printf("\nafter : \n");
   char *p;
   int pos = 0;
   for(int i = 0; i < 5/2; i++)
   {
       p = ptr[pos];
       ptr[pos] = ptr[pos+1];
       ptr[pos+1] = p;
       pos+= 2;
       
   }
   for(int i = 0; i < 5; i++)
   {
       printf("%s ",ptr[i]);
   }
}

