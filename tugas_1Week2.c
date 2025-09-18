#include <stdio.h>

int main(){
    int diameter, tinggi, alas; //deklarasi variabel
    float phi = 3.14; ///deklarasi variabel phi
    printf("Masukkan diameter lingkaran: "); //pertanyaan input diameter
    scanf("%d", &diameter); //scan input diameter
    float luas = phi * (diameter/2) * (diameter/2); //proses perhhitungan luas lingkaran
    printf("Luas lingkaran dengan diameter %d adalah %.2f\n", diameter, luas); //output luas lingkaran


    printf("masukkan tinggi segitiga: "); //pertanyaan input tinggi segitiga bilangan bulat
    scanf("%d", &tinggi);  //scan input tinggi segitiga 
    printf("masukkan alas segitiga: "); //pertanyaan input alas segitiga dalam bilangan bulat
    scanf("%d", &alas); //scan input alas segitiga 
    float luas_segitiga = 0.5 * alas * tinggi; //proses perhitungan luas segitiga
    printf("luas dari segitiga dengan alas %d dan tinggi %d adalah %.2f\n", alas, tinggi, luas_segitiga); //output luas segitiga
    return 0;
}