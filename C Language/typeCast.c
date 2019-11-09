#include <stdio.h>

int main()
{
    int n;

    double x;

    x = 10.5;

    n = (int)x; //without (int), It works also.

    printf("the vaule od n is %d \n", n);

    printf("the vaule od x is %lf \n", x);

    return 0;

}
