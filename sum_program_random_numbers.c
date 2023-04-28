/* addition of two numbers logic */
/* update the pass value in program to increase the no of test cases */
#include<stdio.h>
int num = 1254376897;
int randam()
{
    num = (num*num/765)*12345;
    return num%1000;
}
int main()
{
    int pass = 50000;   // no of test cases varaible
     int i=0;
    while(pass)
    {
        int num1 = randam();
        int num2 = randam();
        int actual = num1+num2;
        //printf("=====num1 = %d , num2 = %d ===\n actual res = %d ",num1,num2,num1+num2);
        int carry = 0;
        int co = 0;
        int res = 0;
        int m = 1;
        while(num1 != 0 | num2 != 0)
        {
            co = (num1%10)+(num2%10);
            res = res+((co%10)+carry)*m;
            carry = co/10;
            m = m*10;
            num1 = num1/10;
            num2 = num2/10;
            
        }
        if(carry != 0)
        {
            res = res+(carry*m);
        }
       // printf("sum = %d",res);
      
        if(res == actual)
        {
            
            printf("%d ,pass",i++);
        }
        else
        {
            printf("fail");
        }
        pass--;
        printf("\n");
    }
}
