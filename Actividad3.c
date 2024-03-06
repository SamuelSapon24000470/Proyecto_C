#include <stdio.h>
#include <stdlib.h>

int main() {
    float cantidad, resultado;
    char opcion_str[10];
    int opcion;

    printf("Bienvenido al conversor de monedas\n");
    printf("Seleccione la moneda que tiene:\n");
    printf("1. Quetzales\n");
    printf("2. Dólares estadounidenses\n");
    printf("3. Euros\n");
    scanf("%s", opcion_str);
    opcion = atoi(opcion_str); // Convertir la cadena a entero

    switch (opcion) {
        case 1:
            printf("Ingrese la cantidad en quetzales: ");
            scanf("%f", &cantidad);
            printf("Seleccione la moneda a la que desea convertir:\n");
            printf("1. Dólares estadounidenses\n");
            printf("2. Euros\n");
            scanf("%s", opcion_str);
            opcion = atoi(opcion_str);
            switch (opcion) {
                case 1:
                    resultado = cantidad * 0.13; // Tasa de cambio aproximada de quetzales a dólares
                    printf("%.2f quetzales equivalen a %.2f dólares\n", cantidad, resultado);
                    break;
                case 2:
                    resultado = cantidad / 8.44; // Tasa de cambio aproximada de quetzales a euros
                    printf("%.2f quetzales equivalen a %.2f euros\n", cantidad, resultado);
                    break;
                default:
                    printf("Opción no válida\n");
            }
            break;
        case 2:
            printf("Ingrese la cantidad en dólares: ");
            scanf("%f", &cantidad);
            printf("Seleccione la moneda a la que desea convertir:\n");
            printf("1. Quetzales\n");
            printf("2. Euros\n");
            scanf("%s", opcion_str);
            opcion = atoi(opcion_str);
            switch (opcion) {
                case 1:
                    resultado = cantidad / 0.13; // Tasa de cambio aproximada de dólares a quetzales
                    printf("%.2f dólares equivalen a %.2f quetzales\n", cantidad, resultado);
                    break;
                case 2:
                    resultado = cantidad * 0.12; // Tasa de cambio aproximada de dólares a euros
                    printf("%.2f dólares equivalen a %.2f euros\n", cantidad, resultado);
                    break;
                default:
                    printf("Opción no válida\n");
            }
            break;
        case 3:
            printf("Ingrese la cantidad en euros: ");
            scanf("%f", &cantidad);
            printf("Seleccione la moneda a la que desea convertir:\n");
            printf("1. Quetzales\n");
            printf("2. Dólares estadounidenses\n");
            scanf("%s", opcion_str);
            opcion = atoi(opcion_str);
            switch (opcion) {
                case 1:
                    resultado = cantidad * 8.44; // Tasa de cambio aproximada de euros a quetzales
                    printf("%.2f euros equivalen a %.2f quetzales\n", cantidad, resultado);
                    break;
                case 2:
                    resultado = cantidad / 0.12; // Tasa de cambio aproximada de euros a dólares
                    printf("%.2f euros equivalen a %.2f dólares\n", cantidad, resultado);
                    break;
                default:
                    printf("Opción no válida\n");
            }
            break;
        default:
            printf("Opción no válida\n");
    }

    return 0;
}
