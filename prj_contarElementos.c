#include <stdio.h>

int contarElemento (int array[], int elemento, int tamanho){
    if(tamanho == 0){
        return 0;
    }
    int ocorrencias = contarElemento (array, elemento, tamanho - 1);
    if(array[tamanho-1] == elemento){
        ocorrencias++;
    }
    return ocorrencias++;
}
int main (void){
    int arr[] = {1,2,4,4,4,2,2,2,2};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int resultado = contarElemento (arr,2, tamanho);
    printf("Quantidade de apariçoes do elemento: %d\n", resultado);
    return 0;
}
