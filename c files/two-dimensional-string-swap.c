#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** str;
    char *p;
    p = (char *)malloc(1024*sizeof(char));
    str = (char** )malloc(n*sizeof(char));
    for(int i = 0 ; i < n ; i++)
    {
        *(str+i) = malloc(1024*sizeof(char));
        scanf("%s",*(str+i));
    }
    for(int i = 0; i < n; i++)
    {
        printf("%s\n",*(str+i));
    }
    printf("\n\n");
    
    printf("\n\n");
    int i = 0;
    int j = 0;
    for(i= 0; i < n; ++i)
    {
        for(j = i+1; j < n; ++j)
        {
            printf("%d %d \n",i,j);
            if(*(str+i)[i] > *(str+j)[i])
            {
                printf("%d %d %s %s \n",i, j, *(str+i),*(str+j));
                strcpy(p,*(str+i));
                strcpy(*(str+i),*(str+j));
                strcpy(*(str+j),p);
            }
        }
    }
    printf(" \n----------------------\n");
    for(int i = 0; i < n; i++)
    {
        printf("%s\n",*(str+i));
    }

    
}

