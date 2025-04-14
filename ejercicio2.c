#include <stdio.h>

int main() {
    int dia;

    // Solicitar al usuario que ingrese un número entre 1 y 7
    printf("Ingresa un número entre 1 y 7 para saber el día de la semana: ");
    scanf("%d", &dia);

    // Usar una estructura switch para determinar el día
    if(dia == 1){
        printf("Lunes\n");
    }else if(dia == 2){
        printf("Martes\n");
    }else if(dia == 3){
        printf("Miercoles\n");
    }else if(dia == 4){
        printf("Jueves\n");
    }else if(dia == 5){
        printf("Viernes\n");
    }else if(dia == 6){
        printf("Sabado\n");
    }else(dia == 7){
        prinf("Domingo\n");
    }
    return 0;
}