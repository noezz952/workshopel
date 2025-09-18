#include <stdio.h>

int main(){
    int nilai_harapan, nilai_aktual;
    float hasil;
    printf("masukkan nilai harapan: ");
    scanf("%d", &nilai_harapan);
    printf("masukkan nilai aktual: ");
    scanf("%d", &nilai_aktual);
    hasil = (1.0-((float)nilai_harapan-nilai_aktual)/nilai_aktual)*100;
    printf("tingkat ketepatan: %.2f%%\n", hasil);
    return 0;
    
}