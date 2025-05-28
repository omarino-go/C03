#include<stdio.h>*
int main(){
  int n,c=0,n1,i=1;
  scanf("%d",&n);
n1=n;
  while (i){
      if (n>0){
          n/=10;
          c++;}
      else
          i=0;
  }
printf("%d contient %d chiffre(s).",n1,c);
return 0;
}
