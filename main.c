#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[100];
    char harf;
    int i,j,harfsayisi=0,harfpozisyon[100];

    printf("Cumle girin:");
    gets(dizi);

    printf("Aranacak harfi girin:");
    scanf("%c",&harf);

    for (i=0;i<strlen(dizi);i++) {
            if (harf==dizi[i])  {
         harfpozisyon[harfsayisi]=i+1;
         harfsayisi++; }
   }

    printf("Toplam bulunan harf sayisi:%d\n",harfsayisi);

    for (j=0;j<harfsayisi;j++)
        printf("Cumledeki pozisyon: %d \n",harfpozisyon[j]);




    return 0;
}
