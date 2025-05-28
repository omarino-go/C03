#include<stdio.h>
//fonction principal
int main(){
  //les variable
    int a,b,c,max;
    scanf("%d %d %d",&a,&b,&c);
  //si a est plus grand que b et c
    if (a>b && a>c)
      max=a;
  //sinon si b l'est
    else if(b>a && b>c)
      max=b;
  //sinon c est le plus grand nombre
    else
      max=c;
  //affichage du resultats
    printf("Le plus grand nombre est : %d\n",max);
    return 0;
}
