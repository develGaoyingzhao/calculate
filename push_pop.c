/* this function push number to the stack and pop the number in the stack top when meet operate. */
#define MAXVALUE 100
int sp = 0;
double val[MAXLINE];

void push(double n)	/* push the number to the stack */
{
	if(sp < MAXVALUE)
		val[++sp] = n;
	else
		printf("error:the stack is full");
}

double pop(void)	/* push the top stack number out */
{
	int n
	if(sp > 0)
		n = val[sp--];
	else
		printf("error:the stack is empty.");
}	
