#include <stdio.h>
void doit(void)
{
	char buf[8];
	fgets(buf, 18, stdin);
	printf("%s\n",buf);
}
int main(void)
{
	printf("So... The end...\n");
	doit();
	printf("or... maybe not?\n");
	return 0;
}
