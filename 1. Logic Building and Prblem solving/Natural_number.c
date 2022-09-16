// 1. Enter the sdum of N natural number.

#include <stdio.h>

int main() 
{
    int n;
    int sum=0;
    printf("Enter the natural number you want the sum of\n");
    scanf("%d",&n);
    sum = n*(n+1)/2;
    printf("your sum of natural number is=\n%d", sum);

    return 0;
}


// *******************************************************
// Output:

// Enter the natural number you want the sum of
// 5
// your sum of natural number is=
// 15

