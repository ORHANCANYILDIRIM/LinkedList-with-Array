#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define maxSize 100

typedef struct linkedList
{
    int deger;
    int sonraki;
} linked;

int main(){
    srand(time(NULL));
    int j,i;
    int index;
    int ILKindex;
    int SONindex;
    int sayi;
    int sayac = 0;
    linked dizi[maxSize];
    printf("bitirmek icin -1 degerini giriniz.\n");
    printf("\n");
    printf("1.sayiyi giriniz:");
    scanf("%d",&sayi);
    ILKindex = rand()%100;
    SONindex = ILKindex;
    dizi[ILKindex].deger = sayi;
    sayac++;
    j=0;
    while(sayi != -1){
        printf("%d.sayiyi giriniz:",j+2);
        scanf("%d",&sayi);
        if(sayi == -1){
            break;
        }
        index = rand()%100;
        dizi[index].deger = sayi;
        dizi[SONindex].sonraki = index;
        SONindex = index;
        sayac++;
        j++;
    }
    index = ILKindex;
    for(i=0;i<sayac;i++){
        printf("%d->",dizi[index].deger);
        index = dizi[index].sonraki;
    }
}
