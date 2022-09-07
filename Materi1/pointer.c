#include <stdio.h>

int main(){
	int x = 5;
	int *y= &x;
    char *nama ="Hidayat";


    printf("%s\n",nama);
	printf("Nilai x:%d\nNilai y:%d\n",x,*y);
}
