#include <stdio.h>

int main()
{
	int x=0,i;
	a:
	i=getchar();
	if(x==256||x==-1)
		x=0;
	if(i=='i')
		++x;
	else if(i=='d')
		--x;
	else if(i=='o')
		printf("%d\n",x);
	else if(i=='s')
		x*=x;
	else
		putchar(10);
	goto a;
}
