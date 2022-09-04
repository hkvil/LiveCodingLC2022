#include <stdio.h>//standard input output library

int main(){
    char nama[20] = "";//deklarasi array char dengan kapasitass 20 huruf/character
    int usia = 0;

    printf("Masukan nama anda:");//print function
    scanf("%s",nama);//input function,%s=string,&nama=target variable

    printf("Masukan usia:");
    scanf("%d",&usia);

    printf("halo %s yang berusia %d\n",nama,usia);//print halo + nama,\n=escape sequence newline

    printf("Address nama:%p\n",nama);
    printf("Address nama:%p\n",&nama);

    printf("Address usia:%p\n",usia);
    printf("Address usia:%p\n",&usia);

        
}

/**
Terminology
-Format Specifier
-Escape Sequence
-& in scanf
**/