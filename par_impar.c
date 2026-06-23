#include <stdio.h> 
int ehPar(int num){
    if(num % 2 == 0){
        return 1;
    }else {
        return 0;
    }
}

int main(){
    
  int resultado;

    resultado = ehPar(5);

     if(resultado == 1){
     printf("Par");
     }else{
     printf("Ímpar");
     }

return 0;
}