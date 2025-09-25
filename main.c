#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	unsigned int x;
	int b;
	
	printf("input a number : ");
	scanf("%ui", &x);
	
	for (b=0; x != 0; x >>= 1)
	{
		if (x & 1) //x의 2진수 끝자리가 1인지. 참이면 1, 거짓이면 0 
		{
			b++;
		}
	}
	
	printf("The result is : %i\n", b); // b에 x가 가지고 있는 1의 개수가 저장됨 

	return 0;
}
