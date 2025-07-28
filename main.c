#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>

int main(){
    int escolha;
    float primeiro, segundo, resultado;
    char simounao;
    char entrada[20];

    printf("===============================\n");
    printf("   Calculadora Simples\n");
    printf("===============================\n");
    printf("Selecione uma operacao:\n");
    printf("1. Adicao\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. Sair\n");
    printf("Opcao: ");

    while (1) {
        scanf("%s", entrada);
        int valido = 1;
        for (int i = 0; entrada[i] != '\0'; i++) {
            if (!isdigit(entrada[i])) {
                valido = 0;
                break;
            }
        }
        if (valido) {
            escolha = atoi(entrada);
            break;
        } else {
            printf("Entrada invalida! Digite um numero de 1 a 5: \n");
        }
    }
    if (escolha == 5){
        printf("Obrigado por usar a calculadora! Ate a proxima.\n");
        Sleep(2000);
        return 0;
    } else if (escolha == 1){
        printf("Digite o primeiro numero: ");
        scanf("%f", &primeiro);
        printf("Digite o segundo numero: ");
        scanf("%f", &segundo);
        resultado = primeiro + segundo;
        printf("Resultado: %f + %f = %f\n", primeiro, segundo, resultado);
    } else if (escolha == 2){
        printf("Digite o primeiro numero: ");
        scanf("%f", &primeiro);
        printf("Digite o segundo numero: ");
        scanf("%f", &segundo);
        resultado = primeiro - segundo;
        printf("Resultado: %f - %f = %f", primeiro, segundo, resultado);
    } else if (escolha == 3){
        printf("Digite o primeiro numero: ");
        scanf("%f", &primeiro);
        printf("Digite o segundo numero: ");
        scanf("%f", &segundo);
        resultado = primeiro * segundo;
        printf("Resultado: %f * %f = %f", primeiro, segundo, resultado);
    } else if (escolha == 4){
        printf("Digite o primeiro numero: ");
        scanf("%f", &primeiro);
        printf("Digite o segundo numero: ");
        scanf("%f", &segundo);
        if (segundo == 0) {
            printf("Erro: Divisao por zero nao eh permitida.\n");
        } else {
            resultado = primeiro / segundo;
            printf("Resultado: %f / %f = %f", primeiro, segundo, resultado);
        }
    } else {
        printf("Opcao invalida. Escolha novamente.\n");
        main();
    }
    for(int i = 0; i < 99999; i++) {
    printf("\nDeseja realizar outra operacao? (s/n): ");
    scanf(" %c", &simounao);
    if (simounao == 's' || simounao == 'S') {
        system("cls");
        main();
        break;
    } else if (simounao == 'n' || simounao == 'N') {
        printf("Obrigado por usar a calculadora! Ate a proxima.\n");
        Sleep(2000);
        break;
    } else {
        printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
    }
}
    return 0;
}

//A validação da opção de menu não trata entradas não numéricas corretamente e, ao perguntar se deseja nova operação, o programa exibe mensagem de erro para resposta inválida mas não repete a solicitação até obter uma resposta válida.
