#include <stdio.h>
// Klavyeden şimdiki yıl ve doğum yılı girilir,yaş hesaplanır

int main() 

{

 int Yil,DogumYili;
 
 printf("suanki yili girin: ");
 scanf("%d",&Yil);
 
 printf("dogdugunuz yili girin: ");
 scanf("%d",&DogumYili);
 
 int yas = Yil - DogumYili;
 
 printf("%d yasındasiniz.",yas);
 
 return 0;

}