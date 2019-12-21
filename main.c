/*This code shows you the number that you enter is a palindromic number or not.
A palindromic number is a number (in some base ) that is the same when written forwards or backwards.
like 121 or 5665 */

#include <stdio.h>
#include <stdlib.h>

void process(int input)
{
    int i = 0,n,res,m,j;
    j = input;
    while(input > 0){
    res = input % 10;
    i = ( i * 10) + res;
    input = input / 10;
    }
    if (i==j){
        printf("This is a palindromic number.");
    }
    else
        printf("This is not a palindromic number.");
}
int main()
{
    int input,res;
    printf("Enter a number: ");
    scanf("%d",&input);

    process(input);

    return 0;
}
