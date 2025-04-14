#include <stdio.h>

int main() {
    int numero;
    int contador = 0;
    
    printf("Ingrese algunos numeros?");
    
    while(1){
    scanf("%d", &numero);
    
    if(numero == -1) break;
        contador++;
    }
    
    printf("%d ", contador);
    
    return 0;
}