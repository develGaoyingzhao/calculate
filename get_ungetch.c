#include<stdio.h>
#define BUFFSIZE 100
int buff[BUFFSIZE];
int buffp = 0;

int getch(void)		/* the function get or push back the next char in the buff or input.*/
{
	return (buffp > 0) ? buff[--buffp] : getchar();
}

void ungetch(int i)
{
	if(buffp == BUFFSIZE)
		printf(" the buff is overflow.");
	else
		buff[buffp++] = i;
}
