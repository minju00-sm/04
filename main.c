#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int time;
	
	printf("Input the second :");
	scanf("%i", &time);
	
	printf("The time is %i : %i\n", time/60, time%60);
	
	return 0;
}
