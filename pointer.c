#include <stdio.h>

int main(){
	char *ptr;
	char c='A';
	ptr = &c;

	printf("%p",ptr);
}