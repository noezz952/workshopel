#include <stdio.h>

int main(){
    int jari_jari; //deklarasi variabel
    float phi = 3.14; ///deklarasi variabel phi
    printf("Masukkan jari-jari lingkaran: "); //pertanyaan input jari-jari
    scanf("%d", &jari_jari); //scan input jari-jari

    float luas = phi *jari_jari*jari_jari; //proses perhitungan luas lingkaran
    printf("Luas lingkaran dengan jari-jari %d adalah %.2f\n", jari_jari, luas); //output luas lingkaran

}