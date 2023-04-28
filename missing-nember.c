/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#define diff_method 0
#define duplicate_method 0
#define reduce_complexity 0
#define reduce_cpu_cycles 1
    
    
int main()
{
    int arr[10] = {1,2,3,5,6,7,8,9,10};
    int count = 0;
    if(diff_method) 
    {
        printf("difference method: ");
        int res = arr[1]-arr[0];
        for(int i = 0; i < 10;i++)
        {
            int com = arr[i+1]-arr[i];
            if(res != com)
            {
                printf("%d",++arr[i]);
                break;
            }
        }
    
    }
    else if(duplicate_method)
    { 
        printf("\n time complexity method: ");
        int start = 1;
        int end = 10;
        
        for(int i = start; i <= end; i++)
        {
            for (int j = 0; j<10; j++)
            {
                if(i == arr[j])
                {
                    break;
                }
                else
                {
                    count++;
                }
            }
            if(count == 10)
            {
                printf("%d",i);
                break;
            }
            count = 0;
        }
    
    }
    else if(reduce_complexity)
    {
        printf("\nreduce time complexity method: ");
        char arr1[11] = {0};
        for(int i = 0; i < 10; i++)
        {
            arr1[arr[i]]++;
        }
        for(int i = 1; i< 10; i++)
        {
            if(arr1[i] == 0)
            {
                printf("%d", i);
            }
        }
    }
    else if(reduce_cpu_cycles)
    {
        printf("\nReduce cpu cycles method: ");
        int start = 1;
        int end = 10;
        for(int i = start; i <= end; i++)
        {
            for(int j = i;j<10; j++)
            {
                if(i == arr[j-1])
                {
                    break;
                }
                else
                {
                    count++;
                }
            }
            if(count == (end-i))
            {
                printf("%d",i);
                break;
            }
            count = 0;
        }
    }
}
