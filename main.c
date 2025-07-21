#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(){
    int escolha;
    float primeiro;
    float segundo;
    float resultado;
    char simounao;
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
    scanf("%d", &escolha);
    if (escolha < 1 || escolha > 5) {
        printf("Opcao invalida. Escolha novamente.\n");
    }
    if (escolha == 5){
        printf("Obrigado por usar a calculadora! Ate a proxima.\n");
        Sleep(2000);
        return 0;
    }
    if (escolha == 1){
        printf("Digite o primeiro numero: ");
        scanf("%f", &primeiro);
        printf("Digite o segundo numero: ");
        scanf("%f", &segundo);
        resultado = primeiro + segundo;
        printf("Resultado: %f + %f = %f\n", primeiro, segundo, resultado);
    }
    if (escolha == 2){
        printf("Digite o primeiro numero: ");
        scanf("%f", &primeiro);
        printf("Digite o segundo numero: ");
        scanf("%f", &segundo);
        resultado = segundo - primeiro;
        printf("Resultado: %f - %f = %f", segundo, primeiro, resultado);
    }
    if (escolha == 3){
        printf("Digite o primeiro numero: ");
        scanf("%f", &primeiro);
        printf("Digite o segundo numero: ");
        scanf("%f", &segundo);
        resultado = primeiro * segundo;
        printf("Resultado: %f * %f = %f", primeiro, segundo, resultado);
    }
    if (escolha == 4){
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
    }
    printf("\nDeseja realizar outra operacao? (s/n): ");
    scanf(" %c", &simounao);
    if (simounao == 's'){
        system("cls");
        main();
    } else if (simounao == 'n') {
        printf("Obrigado por usar a calculadora! Ate a proxima.\n");
        Sleep(2000);
    } else {
        printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
    }
    return 0;
}