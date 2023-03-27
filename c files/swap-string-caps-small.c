#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char ptr[12] = "DEFdefABCabc";
    char small[26] = {0};
    char big[26] = {0};
    int pos = 0;
    char re[12] ;
    for(int i = 0; i < strlen(ptr); i++)
    {
        if(ptr[i] >= 'A' & ptr[i] <= 'Z')
        {
            big[ptr[i]-65]++;
        }
        else if(ptr[i] >= 'a' & ptr[i] <= 'z')
        {
            small[ptr[i]-97]++;
        }
    }
    int len  = strlen(ptr);
    for(int i = 0; i < len; i++)
    {
        if(ptr[i] >= 'A' & ptr[i] <= 'Z')
        {
            for(int j = 0; j < 26; j++)
            {
               
                if(big[j] > 0)
                {
                    re[pos] = (char)(j+65);
                    pos++;
                    big[j] = --big[j];
                    break;
                }
            }
        }
        else if(ptr[i] >= 'a' & ptr[i] <= 'z')
        {
            for(int j = 0; j < 26; j++)
            {
                if(small[j] > 0)
                {
                    re[pos] = (char)(j+97);
                    pos++;
                    small[j] = --small[j];
                    break;
                }
            }
        }
    }
    printf("%s",re);
    
    
    
}
