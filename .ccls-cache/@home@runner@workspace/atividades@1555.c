#include <stdio.h>
#include <stdlib.h>

void teste(int n);
void teste2(x,y);
int main(){
int n;
scanf("%d",&n);
 teste(n);


  return 0;
}

void teste (int n){
int x;
  int y;
for (int i=0; i<n; i++){ 
scanf("%d",&x);
scanf("%d",&y);

  teste2( x, y);

}

}

void teste2(x,y){
int rafael;
  rafael = ((3*x)*(3*x))+ y*y;
int beto;
  beto = (2*(x*x)) + ((5*y)*(5*y));
int carlos;
  carlos = (-100*x) + (y*y*y);

  if(rafael > beto && rafael > carlos){
    printf("Rafael ganhou\n");
  }
  if(beto > rafael && beto > carlos){
    printf("Beto ganhou\n");
  }
  if(carlos > rafael && carlos > beto){
    printf("Carlos ganhou\n");
  }

}
