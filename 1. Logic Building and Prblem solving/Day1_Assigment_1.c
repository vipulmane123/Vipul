// // 1. Predict the output of following program


// #include <stdio.h>

// int main() {
//     static int i=5;
//     if(--i)  // 4 3 2 1 0
//     {
//         main();
    
//     printf("%d", i); // 1 2 3 4
// }
//     return 0;
// }

// // OUTPUT:

// // 0000


// // ********************************************************

// // 2. Predict the output of following program


// #include <stdio.h>

// int main() 
// {
// int x;
// printf("%d", scanf("%d", &x));
//     /*Suppose that input value given for above scanf is 20 */

//     return 1;
// }

// OUTPUT:

// when we give input 20 thne output will be "1"

// *********************************************************************

// 3. Predict the output of following program

// #include <stdio.h>

// int main() 
// {
// int i;
// i = 1,2,3;
// printf("i=%d\n", i);
// getchar();
// return 0;
// }

// OUTPUT:
// i = 1

// *********************************************************************

// 4. Predict the output of following program

// #include <stdio.h>

// int main() 
// {
// int first = 50, second = 60, third;
// third = first /* Will this comment work */ + second;
// printf("\n");
// printf("%d  /* and this? */ \n", third);
// getchar();
// return 0;
// }

// OUTPUT:
// 110

// *********************************************************************

// 5. What will be the output of the following C code? (initial values: x= 7. y = 8)?


#include <stdio.h>

void main() 
{
float x;
int y;
printf("enter the two numbers \n", x);
scanf("%f, %f", &x, &y);
printf("%f, %d", x, y);
}

// OUTPUT:
// enter the two numbers 
//    7, 8
//    7.000000, 1090519040

// *********************************************************************













