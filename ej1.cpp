
#include <iostream>
#include "ej1.h"

// Escribir un programa que declare un arreglo de 5 enteros, y dos punteros a entero y asigneles
// las direcciones del primer y último elemento del arreglo. Devolver la diferencia

int ej1() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *first = &arr[0];
    int *last = &arr[2];
    return last - first;
}
