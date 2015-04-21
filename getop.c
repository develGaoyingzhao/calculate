#include<stdio.h>
#include<ctype.h>

#define NUMBER '0'

int getch(void);
void ungetch(int);

int getop(char s[])	/* this function get the next operater or number. */
{
	int i, c;

	i = 0;
	while((s[0] = c = getch()) == ' ' || s[0] == '\t')
		;
	s[1] = '\0';
	if(!isdigit(c) && c != '.')
		return c;	/* not number */
	if(isdigit(c))
		while(isdigit(s[++i] = c = getch()))
			;
	if(c == '.')
		while(isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';
	if(c != EOF)
		ungetch(c);
	return NUMBER;
}
