//
// Created by Erika Amastal on 06/02/25.
//

#include <stdio.h>
#include <stdlib.h>

// Funcion rapida para leer enteros
int readInt() {
    int num = 0, sign = 1;
    char c = getchar_unlocked();

    // Ignorar espacios y saltos de línea
    while (c < '0' || c > '9') {
        c = getchar_unlocked();
    }

    while (c >= '0' && c <= '9') {
        num = num * 10 + (c - '0');
        c = getchar_unlocked();
    }

    return num * sign;
}

// Funcion rapida para imprimir enteros
void printInt(int n) {
    if (n == 0) {
        putchar_unlocked('0');
        putchar_unlocked('\n');
        return;
    }

    char buffer[12]; // Hasta 10^9 (máximo para enteros)
    int i = 0;

    while (n > 0) {
        buffer[i++] = (n % 10) + '0';
        n /= 10;
    }

    while (i > 0) {
        putchar_unlocked(buffer[--i]);
    }

    putchar_unlocked('\n');
}

int main() {
    int n = readInt();

    int row[1000] = {0}; // Suma de filas
    int col[1000] = {0}; // Suma de columnas
    int total = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int value = readInt();
            row[i] += value;
            col[j] += value;
            total += value;
        }
    }

    for (int i = 0; i < n; i++) {
        printInt(row[i]);
    }

    for (int i = 0; i < n; i++) {
        printInt(col[i]);
    }

    printInt(total);

    return 0;
}
