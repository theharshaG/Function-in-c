#include<stdio.h>

void square(int);

int main()
{
    int n;

    scanf("%d",&n);

    square(n);

    return 0;
}

void square(int x)
{
    printf("Square=%d",x*x);
}
