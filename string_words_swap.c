#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *str = malloc(25);
    char *temp;
    scanf("%[^\n]s",str);
    printf("%s",str);
    int no_of_words;
    int pos = 0;
    
    for(int i = 0; str[i]; i++)
    {
        if(str[i] == ' ') no_of_words++;
    }
    char **ptr;
    no_of_words++;
    ptr = malloc(no_of_words*sizeof(char));
    ptr[pos] = str;
    pos++;
    for(int i = 0; str[i]; i++)
    {
        if(str[i] == ' ') { ptr[pos] = str+i+1; pos++; }
    }
    for(int i = 0; i < no_of_words; i++)
    {
        printf("%d ->%s \n",i,ptr[i]);
    }
    for(int i = 0; i < no_of_words; i++)
    {
        for(int j = 0; ptr[i][j] ; j++)
        {
            if(ptr[i][j] == ' ') ptr[i][j] = '\0';
        }
    }
    for(int i = 0; i < no_of_words; i++)
    {
        printf("%d ->%s \n",i,ptr[i]);
    }
    printf("\n======== reverse string=======\n");
    for(int i = 0;  i < no_of_words/2; i++)
    {
        temp = ptr[i];
        ptr[i] = ptr[no_of_words-i-1];
        ptr[no_of_words-i-1] = temp;
    }
    for(int i = 0; i < no_of_words; i++)
    {
        printf("%d ->%s \n",i,ptr[i]);
    }
    int max = strlen(ptr[0]); 
    int min = strlen(ptr[0]);
    int max_pos = 0; 
    int min_pos = 0;
    for(int i = 1; i < no_of_words; i++)
    {
        if(strlen(ptr[i]) > max)
        {
            max = strlen(ptr[i]);
            max_pos = i;
        }
        else if(strlen(ptr[i]) < min)
        {
            min = strlen(ptr[i]);
            min_pos = i;
        }
    }
    printf("max charecter string : %s --> %d\n",ptr[max_pos],strlen(ptr[max_pos]));
    printf("min charecter string : %s --> %d",ptr[min_pos],strlen(ptr[min_pos]));
}
