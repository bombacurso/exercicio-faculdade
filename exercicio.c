#include <stdio.h>
#include <math.h>

int main() {
    
    printf("Autor: Everton Jorge Garcia Dos Santos\n");
    printf("Matricula: 202221647\n");
    printf("Curso: ADS\n");
    printf("Unversidade:La salle\n\n");
    
    printf("_____ESCOLHA UMA OPERACAO____\n");
    printf("[S] SOMA \n");
    printf("[P] POTENCIA\n");
    printf("[D] DIVISAO \n");
    printf("[M] MULTIPLICACAO\n");
    printf("[R] RAIZ QUADRADA\n");
    
    char operador;
    int a, b, resultado;
    
    printf("Digite uma opcao: ");
    scanf("%c",&operador);
    
     printf("Digite um numero: ");
     scanf("%d", &a);
    
    if(operador !='R'){
        printf("Digite outro numero: ");
        scanf("%d", &b); 
    }
  
    if (operador=='R') {
        resultado = sqrt(a);
    } else if(operador == 'S') {
        resultado = a + b;  
    }else if(operador == 'P') {
        resultado = pow(a, b);
    }else if(operador == 'D') {
        resultado = a / b;
    }else if(operador == 'M') {
        resultado= a * b;
    }else {
        printf("Voce não escolheu uma operacao valida");
        return 0;
    }   
  
    printf("O valor do resultado = %d\n", resultado);

    return 0;
}