#include<stdio.h>
void main()
{
	int x = 20, y = 6;
	x += y;
	y += x;
	x -=y;
	y *=x;
    printf("%d %d", x,y);
}
