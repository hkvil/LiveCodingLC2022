#include <math.h>
//luas persegi 
float luasPersegi(float a){
    return (a*a);
}
//luas persegi panjang
float luasPersegiPanjang(float panjang,float lebar){
    return (panjang*lebar);
}
//luas segitiga
float luasSegitiga(float alas,float tinggi){
    return (0.5*alas*tinggi);
}
//phytagoras
float phytagoras(float a,float b){
    float c = (a*a)+(b*b);
    return sqrt(c);
}
