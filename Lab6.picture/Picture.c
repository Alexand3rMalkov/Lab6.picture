#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int figure(int x, int y);
void main()
{
	int x, y, X, Y;
	setlocale(LC_ALL, "rus");
	scanf("%d", &X);
	scanf("%d", &Y);

    for (x = -(X / 2); x <= X / 2; ++x)
    {
        for (y = -(Y / 2); y <= Y / 2; ++y)
        {
			if (figure(x, y)) printf("x ");
			else printf("* ");
		}
		printf("\n");
	}
}
int figure(int x, int y)
{

    if ((x <= 0 && y >= 0) && (x - y <= 3) && ((pow(x, 2) + pow(y, 2)) <= 36)) return 1;
	else return 0;
}
