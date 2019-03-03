#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }

int (*calcarray[])(int, int) =
{ 
    plus,
    minus, 
    multiply, 
    divided 
};
const char *operation[] =
{
    "+",
    "-",
    "*",
    "/"
};
int main()
{
	int a, c;
	char b[] = "";
	printf("key a Function \nEX: 1+1\n");
	scanf("%i %c %i", &a, &b, &c);
    for (int i = 0;i<4;i++)
    {
        if(strcmp(b,operation[i]) == 0)
        {
            printf("%d %s %d = %d\n", a, b, c, calcarray[i](a, c));
            break;
        }
    }
}