#include <stdio.h>
#include <string.h>

int main() {
    char palabra[] = "superclave123";
    char input[100];

    while (1) {
        printf("Introduce la contraseña: ");
        scanf("%s", input);

        if (strcmp(input, palabra) == 0) {
            printf("Contraseña correcta\n");
            break;
        } else {
            printf("Contraseña incorrecta\n");
        }
    }

    return 0;
}