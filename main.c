/* main function of the calculate.*/
int main(void)
{
	while((type = getop() != EOF)
		switch(type)
		{
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				push(op2 - pop());
				break;
			case '/':
				op2 = pop();
				op1 = pop();
				if(op1 != 0.0)
					push(op2 - op1);
					break;
				else
					printf("error:zero divisor.\n");
			case '\n':
				printf("the result is %f.\n", pop());
				break;
			default:
				printf("error: unknown commmand")
				break;
		}

