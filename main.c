#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination(int x, int y)
{
	return(factorial(x)/(factorial(x-y)*factorial(y)));
}

int factorial(int n)
{
	int i;
	int res=1;
	for(i=1;i<=n;i++)
		res=res*i;
	return res;
}

int get_integer()
{
	int m;
	printf("숫자를 입력하세요: ");
	scanf("%i",&m);
	
	return m;
	
}

int main(int argc, char *argv[]) {
	
	int a, b;
	int res_factorial;
	
	a=get_integer();
	b=get_integer();
	
	res_factorial=factorial(a);
	res_factorial=factorial(a-b);
	res_factorial=factorial(b);
	
	printf("%d!=%i\n",a, factorial(a));
	printf("%d!=%i\n",a-b, factorial(a-b));
	printf("%d!=%i\n",b, factorial(b));
	
	
	printf("C(%i,%i)=%i\n",a,b,combination(a,b));
	
	
	
	return 0;
}
