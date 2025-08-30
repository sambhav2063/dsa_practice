/*#include<stdio.h>
int main()
{
    int n,rev=0,digit;
    printf("enter number to reverse");
    scanf("%d",&n);
    while(n>0 ||n<0 )
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    printf("the reversed number is %d",rev);
    return 0;
}*/
int reverse(int x) 
{
    long rev = 0; 
    int digit;

    while (x != 0) 
    {
        digit = x % 10;        
        rev = rev * 10 + digit;
        x = x / 10;              
    }

    if (rev > 2147483647 || rev < -2147483648)
     {
        return 0;
    }

    return (int)rev;
}
