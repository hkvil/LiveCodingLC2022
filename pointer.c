#include <stdio.h>

int main(){
	int x = 5;
	int *y= &x;

	printf("Nilai x:%d\nNilai y:%d\n",x,*y);
}