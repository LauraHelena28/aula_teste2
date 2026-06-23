#include <stdio.h>

int main()
{
    int opcao;
    float saldo, valor;
    
    do{
        printf("CONTA BANCÁRIA\n");
        printf("1-Saldo\n");
        printf("2-Sacar\n");
        printf("3-Depósito\n");
        printf("0-Sair\n");
        scanf("%i", &opcao);
        
        switch(opcao){
            case 1:
             printf("SALDO\n");
             printf("O saldo é de: R$%.2f\n", saldo);
             break;
             
            case 2:
             printf("SACAR\n");
             printf("Digite o valor para saque: ");
             scanf("%f", &valor);
             
             if(valor <= saldo){
                saldo -= valor;
                printf("Saque OK! Saldo atual é: R$%.2f\n", saldo);
             } else{
                 printf("Saque indisponível, saldo insucifiente!\n");
             }
             break;
             
            case 3:
             printf("DEPÓSITO\n");
             printf("Digite o valor a ser depositado: ");
             scanf("%f", &valor);
             saldo += valor;
             printf("Saldo atual é: R$%.2f\n", saldo);
             break;
             
            case 0:
             printf("Obrigada por usar o Banco!");
             break;
             
            default:
             printf("Opção Inválida!");
        }
    } while (opcao != 0);

    return 0;
}