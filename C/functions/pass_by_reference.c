#include<stdio.h>
#include<conio.h>

void interchange(int *x1,int *y1)
{
    int z1;
    z1=*x1;
    *x1=*y1;
    *y1=z1;
}


void main()
{
    int x=50, y=70;
    printf("Before x=%d y=%d",x,y);
    interchange(&x,&y);
    printf("\nAfter x=%d y=%d",x,y);
}

