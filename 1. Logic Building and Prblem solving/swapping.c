#include <stdio.h>

void main() {
    int a=3, b=5;
  a = a+b;
  b=a-b;
  a=a-b;
    printf("swap a=%d, b=%d",a, b);

}
// ****************************************************
// Output:
// swap a=5, b=3