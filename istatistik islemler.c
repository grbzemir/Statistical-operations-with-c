#include<stdio.h>
#include<math.h>
#include<stdlib.h>


void aritmetikortalama(int siralidizi[] , int uzunluk)
{
    float toplam=0;
    float aritmetikortalama;
    aritmetikortalama=0;

    int i;
    for(i=0;i<uzunluk;i++)
    {
        toplam=toplam+siralidizi[i];
    }
    aritmetikortalama=toplam/uzunluk;
    printf("Aritmetik ortalama: %f",aritmetikortalama);
}

void geometrikortalama(int siralidizi[] , int uzunluk)
{
    float carpim=1;
    float geometrikortalama;
    geometrikortalama=0;

    int i;
    for(i=0;i<uzunluk;i++)
    {
        carpim=carpim*siralidizi[i];
    }
    geometrikortalama=pow(carpim,(double)1.0/uzunluk);
    printf("Geometrik ortalama: %f",geometrikortalama);
}

void medyanbul(int siralidizi[] , int uzunluk)
{
    float medyan;
    medyan=0;

    if(uzunluk%2==0)
    {
        medyan=(siralidizi[uzunluk/2]+siralidizi[(uzunluk/2)-1])/2;
    }
    else
    {
        medyan=siralidizi[uzunluk/2];
    }
    printf("Medyan: %f",medyan);
}

void modbulma(int siralidiz[] , int uzunluk)
{
    int i;
    for(i=0;i<uzunluk;i++)
    {
        int j;
        int sayac=0;
        for(j=0;j<uzunluk;j++)
        {
            if(siralidiz[i]==siralidiz[j])
            {
                sayac++;
            }
        }
        if(sayac>1)
        {
            printf("Mod: %d",siralidiz[i]);
            break;
        }
    }
}


int main ()
{

int k;
int temp;

system("color 0a");

printf("lutfen dizini uzunlugun giriniz: ");
scanf("%d",&k); //k dizinin uzunlugu

int dizi[k]; // boyut ayarlama

int i;
for(i=0;i<k;i++)
{
    printf("lutfen %d. elemani giriniz: ",i+1);
    scanf("%d",&dizi[i]);

}

temp=k;
for(i=0;i<k;i++)
{
    int j;
    for(j=i+1;j<k;j++)
    {
        if(dizi[i]>dizi[j])
        {
            int temp=dizi[i];
            dizi[i]=dizi[j];
            dizi[j]=temp;
        }
    }


}

aritmetikortalama(dizi,k);
geometrikortalama(dizi,k);
medyanbul(dizi,k);
modbulma(dizi,k);


    return 0;
}