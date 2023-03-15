#include <stdio.h>
#include <string.h>
struct ogrenci
{
   char aD[100];
   char soYad[100];
   int nUmara;
   float nott;
   int tElEfon;
   char oKul[100];
   char aadress[100];
   char velli[100];
};

int main()
{
    struct ogrenci ogrenci1;
    strcpy(ogrenci1.aD, "Hamza Can");    
    strcpy(ogrenci1.soYad, "Altintop");    
    ogrenci1.nUmara = 1220505072;
    ogrenci1.nott = 4;
    ogrenci1.tElEfon = 11111111111;
    strcpy(ogrenci1.oKul, "KLU");    
    strcpy(ogrenci1.aadress, "Ankara");   
    strcpy(ogrenci1.velli, "Fatma");
    
    struct ogrenci ogrenci2;
    strcpy(ogrenci2.aD, "Medet");    
    strcpy(ogrenci2.soYad, "Arslanparcasi");    
    ogrenci2.nUmara = 1220505060;
    ogrenci2.nott = 3.5;
    ogrenci2.tElEfon = 22222222222;
    strcpy(ogrenci2.oKul, "KLU");    
    strcpy(ogrenci2.aadress, "Diyarbakir");  
    strcpy(ogrenci2.velli, "Murat");
    
    struct ogrenci ogrenci3;
    strcpy(ogrenci3.aD, "Muhammed Emre");    
    strcpy(ogrenci3.soYad, "Tot");    
    ogrenci3.nUmara = 1220505089;
    ogrenci3.nott = 3;
    ogrenci3.tElEfon = 33333333333;
    strcpy(ogrenci3.oKul, "NKV");    
    strcpy(ogrenci3.aadress, "Ankara");  
    strcpy(ogrenci3.velli, "Ayse");
    
    struct ogrenci ogrenci4;
    strcpy(ogrenci4.aD, "Osman Nuri");    
    strcpy(ogrenci4.soYad, "Tiftik");    
    ogrenci4.nUmara = 1220505001;
    ogrenci4.nott = 3.3;
    ogrenci4.tElEfon = 44444444444;
    strcpy(ogrenci4.oKul, "FB");    
    strcpy(ogrenci4.aadress, "Yozgat");  
    strcpy(ogrenci4.velli, "Fatih");
    
    struct ogrenci ogrenci5;
    strcpy(ogrenci5.aD, "Oksan");    
    strcpy(ogrenci5.soYad, "Demir");    
    ogrenci5.nUmara = 1220505053;
    ogrenci5.nott = 3.9;
    ogrenci5.tElEfon = 55555555555;
    strcpy(ogrenci5.oKul, "Cumhuriyet");    
    strcpy(ogrenci5.aadress, "Ankara");  
    strcpy(ogrenci5.velli, "Ecrin");

    printf("Ogrenci 1 adi : %s \n",ogrenci1.aD);
    printf("Ogrenci 1 soyadi : %s \n",ogrenci1.soYad);
    printf("Ogrenci 1 numarasi : %d \n",ogrenci1.nUmara);
    printf("Ogrenci 1 notu : %g \n",ogrenci1.nott);
    printf("Ogrenci 1 telefonu : %d \n",ogrenci1.tElEfon);
    printf("Ogrenci 1 okulu : %s \n",ogrenci1.oKul);
    printf("Ogrenci 1 adresi : %s \n",ogrenci1.aadress);
    printf("Ogrenci 1 velisi : %s \n\n",ogrenci1.velli);
    
    printf("Ogrenci 2 adi : %s \n",ogrenci2.aD);
    printf("Ogrenci 2 soyadi : %s \n",ogrenci2.soYad);
    printf("Ogrenci 2 numarasi : %d \n",ogrenci2.nUmara);
    printf("Ogrenci 2 notu : %g \n",ogrenci2.nott);
    printf("Ogrenci 2 telefonu : %d \n",ogrenci2.tElEfon);
    printf("Ogrenci 2 okulu : %s \n",ogrenci2.oKul);
    printf("Ogrenci 2 adresi : %s \n",ogrenci2.aadress);
    printf("Ogrenci 2 velisi : %s \n\n",ogrenci2.velli);
    
    printf("Ogrenci 3 adi : %s \n",ogrenci3.aD);
    printf("Ogrenci 3 soyadi : %s \n",ogrenci3.soYad);
    printf("Ogrenci 3 numarasi : %d \n",ogrenci3.nUmara);
    printf("Ogrenci 3 notu : %g \n",ogrenci3.nott);
    printf("Ogrenci 3 telefonu : %d \n",ogrenci3.tElEfon);
    printf("Ogrenci 3 okulu : %s \n",ogrenci3.oKul);
    printf("Ogrenci 3 adresi : %s \n",ogrenci3.aadress);
    printf("Ogrenci 3 velisi : %s \n\n",ogrenci3.velli);
    
    printf("Ogrenci 4 adi : %s \n",ogrenci4.aD);
    printf("Ogrenci 4 soyadi : %s \n",ogrenci4.soYad);
    printf("Ogrenci 4 numarasi : %d \n",ogrenci4.nUmara);
    printf("Ogrenci 4 notu : %g \n",ogrenci4.nott);
    printf("Ogrenci 4 telefonu : %d \n",ogrenci4.tElEfon);
    printf("Ogrenci 4 okulu : %s \n",ogrenci4.oKul);
    printf("Ogrenci 4 adresi : %s \n",ogrenci4.aadress);
    printf("Ogrenci 4 velisi : %s \n\n",ogrenci4.velli);
    
    printf("Ogrenci 5 adi : %s \n",ogrenci5.aD);
    printf("Ogrenci 5 soyadi : %s \n",ogrenci5.soYad);
    printf("Ogrenci 5 numarasi : %d \n",ogrenci5.nUmara);
    printf("Ogrenci 5 notu : %g \n",ogrenci5.nott);
    printf("Ogrenci 5 telefonu : %d \n",ogrenci5.tElEfon);
    printf("Ogrenci 5 okulu : %s \n",ogrenci5.oKul);
    printf("Ogrenci 5 adresi : %s \n",ogrenci5.aadress);
    printf("Ogrenci 5 velisi : %s \n",ogrenci5.velli);
    
    
    return 0;
}
