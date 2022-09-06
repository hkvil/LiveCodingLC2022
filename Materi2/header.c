#include <stdio.h>
#include <stdlib.h>
#include "matematika.h"

int main(int argc,char *argv[]){
    float a = 2;
    float b = 3;
    
    printf("Penambahan:%d\n",add(a,b));
    printf("Pembagian:%f\n",divide(a,b));
    return 0;
}
