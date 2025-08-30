/*#include<stdio.h>
int main()
{
    int n,rev=0,digits,orginal;
    printf("enter number");
    scanf("%d",&n);
    orginal=n;
    while(n>0)
    {
    digits=n%10;
    rev=rev*10+digits;
    n=n/10;
    }
    if(rev==orginal)
    printf("the number is pallindrome");
    else
    printf("the number isnt pallindrome");
    return 0;

}
  */

#include <stdbool.h>  

bool isPalindrome(int x)
 {
    if (x < 0) return false; 

    int original = x;
    long rev = 0; 

    while (x > 0)
     {
        int digit = x % 10;
        rev = rev * 10 + digit;
        x = x / 10;
    }

    return (rev == original);
}
