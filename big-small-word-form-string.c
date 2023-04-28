/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    char *ptr = "harish chary is good boy";
    int long_min = 0;
    int long_max = 0;
    int short_min = 0;
    int short_max = 0;
    int max = 0;
    int min = 9999;
    int count = 0;
    for(int i = 0; i < strlen(ptr); i++)
    {
        if(ptr[i] != ' ')
        {
            count++;
        }
        else
        {
            if(max < count)
            {
                max = count;
                long_min = long_max;
                long_max = i+1;
                count = 0;
            }
            else if(min > count)
            {
                min = count;
                short_min = short_max;
                short_max = i+1;
                count = 0;
            }
        }
    }
    printf("\n");
    printf("==========long word======\n");
    for(int i = long_min; i < long_max; i++)
    {
        printf("%c",ptr[i]);
    }
    printf("\nlenght -> %d\n",max);
    printf("\n");
    printf("==========short word======\n");
    for(int i = short_min; i < short_max; i++)
    {
        printf("%c",ptr[i]);
    }
    printf("\nlenght -> %d\n",min);
    return 0;
}

