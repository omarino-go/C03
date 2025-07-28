#include<stdio.h>
//fonction principale
int main(){
  //les variable necessaire pour le programme
  int a=0,b=1,n,suite;
  //recuperation du nombre d'incrémentation
  scanf("%d",&n);
  //parcour du nombre donnée
  for(int i=0;i<6;i++){
      //si i est inférieur ou egal à 1
      if (i<=1)
        suite=i;      
      //sinon
      else{
        suite=a+b;
        a=b;
        b=suite;
        }
      printf("%d ",suite);
    }
    printf("\n");
    return 0;
}
