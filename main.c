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
		if (x & 1) //x�� 2���� ���ڸ��� 1����. ���̸� 1, �����̸� 0 
		{
			b++;
		}
	}
	
	printf("The result is : %i\n", b); // b�� x�� ������ �ִ� 1�� ������ ����� 

	return 0;
}
