#include<stdio.h>
int sum(int , int);

int main(void)
{
    int a = 19;
    int b = 82;

    int sum = add(a,b);

    printf("\n The result sumary of [%i] and [%i] is [%i]\n", a, b, sum);

    if isOver(sum) {
       printf("\n The result is over the limit value");
    }

    if isUnder(sum) {
       printf("\n The result in under the floor value");
    }

    return 0;
}
