#include <stdio.h>


struct {
    char *nama;
    int usia;
}mhs1,mhs2;

int main(){
    mhs1.nama = "Hidayat";
    mhs1.usia = 1;

    printf("%s\n",mhs1.nama);
    printf("%d\n",mhs1.usia);

    return 0;
}
