#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){

	printf("You have entered %d argument",argc);

	for(int i=0;i<argc;i++){
		printf("Argument %d:%s\n",i,argv[i]);
	}

	printf("Nama kamu:%s\n",argv[1]);
	printf("Usia:%s\n",argv[2]);
}

/**
argc=Argument COunt
argv=Argument Vector
**/