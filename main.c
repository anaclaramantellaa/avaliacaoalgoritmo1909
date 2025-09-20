#include <stdio.h>

int main()
{
    /*
    int num, result;
    result = 0;
    do{
        printf("Informe um numero: ");
        scanf("%d", &num);
        if(num > 0){
            result = result + num;
        }
        else{
         printf("Numero Negativo!!\n");
        }
    }while(num != 0);
    printf("Resultado: %d", result);
    */

    int opcao, cupom,quantprodutos = 0, valordesconto, valortotal = 0;
    printf("Cardapio:\n");
    printf("1- Cachorro-quente: R$ 12,00\n");
    printf("2-Hamburguer: R$ 18,00\n");
    printf("3-Batata-frita: R$ 8,00\n");
    printf("4- Refrigerante: R$ 6,00\n");
    printf("5- Combo Cachorro-quente + Fritas + Refri: R$ 25,00\n");
    printf("6-Combo Hamburguer + Fritas + Refri: R$ 30,00\n");
    printf("7- Finalizar a compra!\n");
    scanf("%d", &opcao);
    while(opcao != 7){
        if(opcao == 1){
            valortotal += 12.00;
            quantprodutos++;
        }
        else if(opcao == 2){
            valortotal += 18.00;
            quantprodutos++;
        }
        else if(opcao == 3){
            valortotal += 8.00;
            quantprodutos++;
        }
        else if(opcao == 4){
            valortotal+=6.00;
            quantprodutos++;
        }
        else if(opcao == 5){
            valortotal+=25.00;
            quantprodutos++;
        }
        else if(opcao == 6){
            valortotal+=30.00;
            quantprodutos++;
        }
        else if(opcao == 7){
            printf("Finalizando compra!\n");
        }
        else{
            printf("Opcao invalida!!\n");
        }
    printf("Cardapio:\n");
    printf("1- Cachorro-quente: R$ 12,00\n");
    printf("2-Hamburguer: R$ 18,00\n");
    printf("3-Batata-frita: R$ 8,00\n");
    printf("4- Refrigerante: R$ 6,00\n");
    printf("5- Combo Cachorro-quente + Fritas + Refri: R$ 25,00\n");
    printf("6-Combo Hamburguer + Fritas + Refri: R$ 30,00\n");
    printf("7- Finalizar a compra!\n");
    scanf("%d", &opcao);
    }
    printf("Possui cupom de desconto?\n1-Sim 2-Nao\n");
    scanf("%d", &cupom);
    if(cupom == 1){
        printf("Qual o valor do cupom em reais?\n");
        scanf("%d", &valordesconto);
        printf("Quantidade de produtos: %d\n", quantprodutos);
        printf("Valor total da compra: %d\n", valortotal);
        printf("Valor total da compra com desconto: %d\n", valortotal - valordesconto);
    }
    else{
        printf("Quantidade de produtos: %d\n", quantprodutos);
        printf("Valor total da compra: %d\n", valortotal);
    }



    return 0;
}
